CFLAGS = -std=c++11 
CC = g++

ex13.12:ex13.12.o Sales_data.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.12.o:ex13.12.cpp Sales_data.h
	$(CC) $(CFLAGS) -c ex13.12.cpp
Sales_data.o:Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp
clean:
	rm ex13.12 *.o
