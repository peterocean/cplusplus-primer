CFLAGS = -std=c++11 
CC = g++

ex15.4:ex15.4.o quote.o bulk_quote.o
	$(CC) $(CFLAGS) -o $@ $^
ex15.4.o:ex15.4.cpp  quote.h bulk_quote.h
	$(CC) $(CFLAGS) -c ex15.4.cpp
	$(CC) $(CFLAGS) -c quote.cpp
	$(CC) $(CFLAGS) -c bulk_quote.cpp
clean:
	rm ex15.4 *.o
