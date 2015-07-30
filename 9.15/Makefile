CFLAGS = -std=c++11 
CC = g++

compare_vector:compare_vector.o
	$(CC) $(CFLAGS) -o $@ $^
compare_vector.o:
	$(CC) $(CFLAGS) -c compare_vector.cpp
clean:
	rm compare_vector *.o
