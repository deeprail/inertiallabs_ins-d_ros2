#include "ILDriver.h"
#include <iostream>

#ifdef WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#include <sys/select.h>
int _getch(void)
{
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    fflush(STDIN_FILENO);
    fd_set readfds;
    FD_ZERO(&readfds);
    FD_SET(0, &readfds);
    while (1)
    {
        int count = select(1, &readfds, nullptr, nullptr, nullptr);
        if (count > 0) {
            if (FD_ISSET(0, &readfds)) {
                ch = getchar();
                break;
            }
        }
    }    
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#endif

void callback(IL::INSDataStruct* data, void* context)
{
    printf(
        "%8s: H = %+07.2f, P = %+07.2f, R = %+07.2f, G = [%+07.1f %+07.1f %+07.1f], A = [%+07.4f %+07.4f %+07.4f], USW = %04x, V = %05.2f, T = %+05.1f\r", 
        reinterpret_cast<std::string*>(context)->c_str(), 
        data->Heading, 
        data->Pitch, 
        data->Roll,
        data->Gyro[0], data->Gyro[1], data->Gyro[2],
        data->Acc[0], data->Acc[1], data->Acc[2],
        data->USW,
        data->VSup,
        data->Temp
    );
}

int main()
{
    IL::Driver driver;
    uint8_t packetType = IL::PacketType::IL_IMU_Orientation;
    std::cout << "Enter INS URL ([serial/tcp/udp]:[com port path / hostname or IP]:[baud rate or TCP/UDP port]: ";
    std::string URL;
    std::cin >> URL;
    if (driver.connect(URL.c_str()) != 0)
    {
        std::cout << "IL Driver failed to connect!" << std::endl;
        return 1;
    }
    if (driver.isStarted()) {
        driver.stop();
    }
    IL::INSDeviceInfo devInfo = driver.getDeviceInfo();
    IL::INSDevicePar devParams = driver.getDeviceParams();
    std::cout << "Found INS " << std::string(devInfo.IDN,8) << " providing data at " << devParams.dataRate << " Hz" << std::endl;
    std::string context(devInfo.IDN, 8);
    int res;
    driver.setCallback(&callback, &context);
    std::this_thread::sleep_for(std::chrono::seconds(1));
/*
    std::cout << "Starting device in polling mode" << std::endl;
    if ((res = driver.start(packetType, true)))
    {
        std::cout << "INS failed to start! " << res << std::endl;
        driver.disconnect();
        return 2;
    }
    for (int i = 0; i < 5; ++i)
    {
        if (driver.request(packetType, 100) == 0) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        else
        {
            std::cout << "INS failed to fulfill request!" << std::endl;
            break;
        }
    }
    std::cout << "\nStopping device" << std::endl;
    driver.stop();
*/
    auto timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    char buf[256];
#ifdef WIN32
    sprintf_s(buf, "%8s_%010llu.txt", context.c_str(), (uint64_t)timestamp);
#else
    sprintf(buf, "%8s_%010lu.txt", context.c_str(), (uint64_t)timestamp);
#endif
    std::cout << "Starting device in continuous mode with logging to " << buf << ", press any key to stop..." << std::endl;
    if ((res = driver.start(packetType, false, buf)))
    {
        std::cout << "INS failed to start! " << res << std::endl;
        driver.disconnect();
        return 2;
    }
    int c = _getch();
    std::cout << "\nStopping device" << std::endl;
    driver.stop();
    std::cout << "Closing device" << std::endl;
    driver.disconnect();
    return 0;
}
