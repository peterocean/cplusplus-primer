CFLAGS = -std=c++11 
CC = g++

ex741:ex741.o Sales_data.o
	$(CC) $(CFLAGS) -o $@ $^
ex741.o:ex741.cpp Sales_data.h
	$(CC) $(CFLAGS) -c ex741.cpp
Sales_data.o:Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp
clean:
	rm ex741 *.o
