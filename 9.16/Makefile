CFLAGS = -std=c++11 
CC = g++

cmp_vector_list:cmp_vector_list.o
	$(CC) $(CFLAGS) -o $@ $^
cmp_vector_list.o:
	$(CC) $(CFLAGS) -c com_vector_list.cpp
clean:
	rm cmp_vector_list *.o
