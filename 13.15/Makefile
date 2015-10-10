CFLAGS = -std=c++11 
CC = g++

ex13.15:ex13.15.o 
	$(CC) $(CFLAGS) -o $@ $^
ex13.15.o:ex13.15.cpp numbered.h
	$(CC) $(CFLAGS) -c ex13.15.cpp
clean:
	rm ex13.15 *.o
