CFLAGS = -std=c++11 
CC = g++

ex74:ex74.o screen.o
	$(CC) $(CFLAGS) -o $@ $^
ex74.o:ex74.cpp screen.h
	$(CC) $(CFLAGS) -c ex74.cpp
screen.o:screen.cpp screen.h
	$(CC) $(CFLAGS) -c screen.cpp
clean:
	rm ex74 *.o
