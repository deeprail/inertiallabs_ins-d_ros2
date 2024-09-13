rebuild:
	make clean
	colcon build

clean:
	rm build install log -rf