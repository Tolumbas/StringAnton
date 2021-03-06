#include "myString.h"
#include <string.h>
#include <iostream>

using namespace std;

myString::myString()
{
	string.clear();
}

myString::~myString()
{
	string.clear();
}

myString::myString(const char * in)
{
	string.clear();
	for (int a = 0;a < strlen(in);a++) {
		char * e =new char();
		*e = in[a];
		string.push_back(e);
	}
}

myString::myString(const myString & in)
{
	string.clear();
	for (int a = 0;a < in.string.size();a++) {
		string.push_back(in.string[a]);
	}
}

bool myString::operator==(const myString & in)
{
	if (string.size() == in.string.size()) {
		for (int a = 0;a < string.size();a++) {
			if (*in.string[a] != *string[a]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

bool myString::operator==(const char * in)
{
	myString out(in);
	return operator==(out);
}

bool myString::operator!=(const myString & in)
{
	return !operator==(in);
}

bool myString::operator!=(const char * in)
{
	return !operator==(in);
}

void myString::operator+=(const myString & in)
{
	for (int a = 0;a < in.string.size();a++) {
		string.push_back(in.string[a]);
	}
}

void myString::operator+=(const char * in)
{
	myString out(in);
	return operator+=(out);

}

void myString::operator=(const myString & in)
{
	string.clear();
	operator+=(in);
}

void myString::operator=(const char * in)
{
	myString out(in);
	operator=(out);
}

myString myString::operator+(const myString & in)
{
	myString out(*this);
	out += in;
	return out;
}

myString myString::operator+(const char * in)
{
	myString out(in);
	return operator+(out);
}

char& myString::operator[](int in)
{
	return *string[in];
}
