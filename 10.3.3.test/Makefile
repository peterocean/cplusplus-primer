CFLAGS = -std=c++11 
CC = g++

fcn3:fcn3.o
	$(CC) $(CFLAGS) -o $@ $^
fcn3.o:fcn3.cpp
	$(CC) $(CFLAGS) -c fcn3.cpp
clean:
	rm fcn3 *.o
