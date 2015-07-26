CFLAGS = -std=c++11 
CC = g++

list_init:list_init.o
	$(CC) $(CFLAGS) -o $@ $^
list_init.o:
	$(CC) $(CFLAGS) -c list_init.cpp
clean:
	rm list_init *.o
