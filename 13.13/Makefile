CFLAGS = -std=c++11 
CC = g++

ex13.13:ex13.13.o x.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.13.o:ex13.13.cpp x.h
	$(CC) $(CFLAGS) -c ex13.13.cpp
x.o:x.cpp x.h
	$(CC) $(CFLAGS) -c x.cpp
clean:
	rm ex13.13 *.o
