CFLAGS = -std=c++11 
CC = g++

ex724:ex724.o screen.o
	$(CC) $(CFLAGS) -o $@ $^
ex724.o:ex724.cpp screen.h
	$(CC) $(CFLAGS) -c ex724.cpp
screen.o:screen.cpp screen.h
	$(CC) $(CFLAGS) -c screen.cpp
clean:
	rm ex724 *.o
