CFLAGS = -std=c++11 
CC = g++

delete:delete.o
	$(CC) $(CFLAGS) -o $@ $^
delete.o:
	$(CC) $(CFLAGS) -c delete.cpp
clean:
	rm delete *.o
