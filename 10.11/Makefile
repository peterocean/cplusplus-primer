CFLAGS = -std=c++11 
CC = g++

elimDumps:elimDumps.o
	$(CC) $(CFLAGS) -o $@ $^
elimDumps.o:
	$(CC) $(CFLAGS) -c elimDumps.cpp
clean:
	rm elimDumps *.o
