CFLAGS = -std=c++11 
CC = g++

ex72:ex72.o Sales_data.o
	$(CC) $(CFLAGS) -o $@ $^
ex72.o:ex72.cpp Sales_data.h
	$(CC) $(CFLAGS) -c ex72.cpp
Sales_data.o:Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp
clean:
	rm ex72 *.o
