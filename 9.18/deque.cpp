/*
	deque.cpp
	copyright (c) 2015 by peter yang

 	This software is free software; you can redistribute it and/or
 	modify it under the terms of the GNU Lesser General Public
 	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

 */

#include <iostream>
#include <deque>

void deque_string_read(std::deque<std::string> &q)
{
	std::string word;
	while (std::cin >> word)
		q.push_back(word);
}

void print_deque_string(std::deque<std::string> &q)
{
	for (auto it = q.cbegin(); it != q.cend(); it++) {
		std::cout << *it << std::endl;
	}
}

int main(int argc, char *argv[])
{
	std::deque<std::string> q;
	deque_string_read(q);
	print_deque_string(q);
	return 0;
}
