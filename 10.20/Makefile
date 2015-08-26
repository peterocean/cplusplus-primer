CFLAGS = -std=c++11 
CC = g++

count_if:count_if.o
	$(CC) $(CFLAGS) -o $@ $^
count_if.o:count_if.cpp
	$(CC) $(CFLAGS) -c count_if.cpp
clean:
	rm count_if *.o
