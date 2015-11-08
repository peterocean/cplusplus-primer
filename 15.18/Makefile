CFLAGS = -std=c++11 
CC = g++

ex15.18:ex15.18.o 
	$(CC) $(CFLAGS) -o $@ $^
ex15.18.o:ex15.18.cpp  base.h 
	$(CC) $(CFLAGS) -c ex15.18.cpp
clean:
	rm ex15.18 *.o
