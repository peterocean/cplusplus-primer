
#ifndef _STRBLOB_H_
#define _STRBLOB_H_

#include <vector>
#include <string>
#include <memory>
#include <memory>
#include <stdexcept>

using std::vector;
using std::string;

class StrBlob {
	public:
		typedef vector<string>::size_type size_type;
		StrBlob();
		StrBlob(std::initializer_list<string> i1);
		size_type size() const{return data->size();}
		bool empty() const {return data->empty();}
		void push_back(const string &t) {data->push_back(t);}
		void pop_back();

		string& front();
		string& back();
		
		const string& front() const;
		const string& back() const;

	private:
		std::shared_ptr<vector<string>> data;
		void check(size_type i, const string &msg) const;
};

#endif
