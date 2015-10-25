CFLAGS = -std=c++11 
CC = g++

ex15.15:ex15.15.o quote.o bulk_quote.o
	$(CC) $(CFLAGS) -o $@ $^
ex15.15.o:ex15.15.cpp  quote.h disc_quote.h bulk_quote.h
	$(CC) $(CFLAGS) -c ex15.15.cpp
	$(CC) $(CFLAGS) -c quote.cpp
	$(CC) $(CFLAGS) -c bulk_quote.cpp
clean:
	rm ex15.15 *.o
