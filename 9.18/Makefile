CFLAGS = -std=c++11 
CC = g++

deque:deque.o
	$(CC) $(CFLAGS) -o $@ $^
deque.o:
	$(CC) $(CFLAGS) -c deque.cpp
clean:
	rm deque *.o
