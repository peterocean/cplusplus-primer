CFLAGS = -std=c++11 
CC = g++

biggies:biggies.o
	$(CC) $(CFLAGS) -o $@ $^
biggies.o:
	$(CC) $(CFLAGS) -c biggies.cpp
clean:
	rm biggies *.o
