CFLAGS = -std=c++11 
CC = g++

search_and_delete:search_and_delete.o
	$(CC) $(CFLAGS) -o $@ $^
search_and_delete.o:
	$(CC) $(CFLAGS) -c search_and_delete.cpp
clean:
	rm search_and_delete *.o
