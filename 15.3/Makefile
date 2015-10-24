CFLAGS = -std=c++11 
CC = g++

ex15.3:ex15.3.o quote.o 
	$(CC) $(CFLAGS) -o $@ $^
ex15.3.o:ex15.3.cpp  quote.h 
	$(CC) $(CFLAGS) -c ex15.3.cpp
	$(CC) $(CFLAGS) -c quote.cpp
clean:
	rm ex15.3 *.o
