CFLAGS = -std=c++11 
CC = g++

ex13.14:ex13.14.o 
	$(CC) $(CFLAGS) -o $@ $^
ex13.14.o:ex13.14.cpp numbered.h
	$(CC) $(CFLAGS) -c ex13.14.cpp
clean:
	rm ex13.14 *.o
