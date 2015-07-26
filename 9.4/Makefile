CFLAGS = -std=c++11 
CC = g++

search:search.o
	$(CC) $(CFLAGS) -o $@ $^
search.o:
	$(CC) $(CFLAGS) -c search.c
clean:
	rm search *.o
