#pragma once
#include <vector>
#include <iostream>
using namespace std;

class myString
{
private:
	vector<char*> string;
public:
	myString();
	~myString();
	myString(const char*);
	myString(const myString&);
	void operator=(const char*);
	void operator=(const myString&);

	myString operator+(const char*);
	myString operator+(const myString&);

	bool operator==(const myString&);
	bool operator==(const char*);

	bool operator!=(const myString&);
	bool operator!=(const char*);

	void operator+=(const char*);
	void operator+=(const myString&);

	char* operator[](int);

	friend myString operator+(const char* in, const myString& obj2) {
		myString obj1(in);
		return obj1 + obj2;
	}

	friend istream& operator>>(istream& in, myString& obj) {
		obj.string.clear();
		while (true)
		{
			char a;
			a = in.get();
			if (a == ' ' || a == '\n') {
				return in; 
			}
			obj += &a;
		}
	}
	friend ostream& operator<<(ostream& out, const myString& obj) {
		for (int a = 0;a < obj.string.size();a++) {
			out << *obj.string[a];
		}
		out << '\0';
		return out;
	}
};

