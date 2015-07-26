CFLAGS = -std=c++11 
CC = g++

vector_init:vector_init.o
	$(CC) $(CFLAGS) -o $@ $^
search.o:
	$(CC) $(CFLAGS) -c vector_init.c
clean:
	rm vector_init *.o
