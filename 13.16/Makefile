CFLAGS = -std=c++11 
CC = g++

ex13.16:ex13.16.o 
	$(CC) $(CFLAGS) -o $@ $^
ex13.16.o:ex13.16.cpp numbered.h
	$(CC) $(CFLAGS) -c ex13.16.cpp
clean:
	rm ex13.16 *.o
