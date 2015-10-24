CFLAGS = -std=c++11 
CC = g++

ex14.9:ex14.9.o Sales_data.o
	$(CC) $(CFLAGS) -o $@ $^
ex14.9.o:ex14.9.cpp Sales_data.h
	$(CC) $(CFLAGS) -c ex14.9.cpp
Sales_data.o:Sales_data.cpp Sales_data.h
	$(CC) $(CFLAGS) -c Sales_data.cpp
clean:
	rm ex14.9 *.o
