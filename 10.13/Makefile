CFLAGS = -std=c++11 
CC = g++

partition_test:partition_test.o
	$(CC) $(CFLAGS) -o $@ $^
partition_test.o:
	$(CC) $(CFLAGS) -c partition_test.cpp
clean:
	rm partition_test *.o
