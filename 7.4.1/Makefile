CFLAGS = -std=c++11 
CC = g++

accounttest:accounttest.o 
	$(CC) $(CFLAGS) -o $@ $^
accounttest.o:accounttest.cpp account.h
	$(CC) $(CFLAGS) -c accounttest.cpp
clean:
	rm accounttest.cpp *.o
