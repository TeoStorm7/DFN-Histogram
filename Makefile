TARGET = convert

all:
	g++ *.cpp -std=c++17 -lcapnp `root-config --cflags --glibs` -lkj -o $(TARGET)
	
