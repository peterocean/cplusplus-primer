CFLAGS = -std=c++11 
CC = g++

delete_and_copy:delete_and_copy.o
	$(CC) $(CFLAGS) -o $@ $^
delete_and_copy.o:
	$(CC) $(CFLAGS) -c delete_and_copy.cpp
clean:
	rm delete_and_copy *.o
