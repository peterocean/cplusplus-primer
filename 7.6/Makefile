CFLAGS = -std=c++11 
CC = g++

ex76:ex76.o Sales_data.o
	$(CC) $(CFLAGS) -o $@ $^
ex76.o:ex76.cpp Sales_data.h
	$(CC) $(CFLAGS) -c ex76.cpp
Sales_data.o:Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp
clean:
	rm ex76 *.o
