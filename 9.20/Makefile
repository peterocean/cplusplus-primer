CFLAGS = -std=c++11 
CC = g++

divide:divide.o
	$(CC) $(CFLAGS) -o $@ $^
divide.o:
	$(CC) $(CFLAGS) -c divide.cpp
clean:
	rm divide *.o
