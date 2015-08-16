CFLAGS = -std=c++11 
CC = g++

count_test:count_test.o
	$(CC) $(CFLAGS) -o $@ $^
count_test.o:
	$(CC) $(CFLAGS) -c count_test.cpp
clean:
	rm count_test *.o
