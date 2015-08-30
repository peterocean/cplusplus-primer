#include "StrBlob.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

StrBlob::StrBlob() : data(std::make_shared<vector<string>>()){}

StrBlob::StrBlob(std::initializer_list<std::string> i1):
	data(std::make_shared<vector<string>>(i1)){}

void StrBlob::check(StrBlob::size_type i, const string &msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}

string & StrBlob::front()
{
	check(0,"front on empty StrBlob");
	return data->front();
}

const string& StrBlob::front() const
{
	check(0,"front on empty StrBlob");
	return data->front();
}


const string& StrBlob::back() const
{
	check(0,"front on empty StrBlob");
	return data->back();
}

string& StrBlob::back()
{
	check(0,"front on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0,"front on empty StrBlob");
	data->pop_back();	
}


