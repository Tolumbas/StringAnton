#pragma once
#include <vector>
#include <iostream>
using namespace std;

class myString
{
private:
	vector<char> string;
public:
	myString(const char*);
	myString(const myString&);
	myString operator=(const char*);
	myString operator=(const myString&);

	myString operator+(const char*);
	myString operator+(const myString&);

	bool operator==(const myString&);
	bool operator==(const char*);

	bool operator!=(const myString&);
	bool operator!=(const char*);

	void operator+=(const char*);
	void operator+=(const myString&);

	myString operator+(const char*);
	myString operator+(const myString&);

	myString operator[](int);

	friend istream& operator>>(istream& in, const myString& obj) {
		while (true)
		{
			char a;
			a = in.get();
			if (a == ' ')return in;
			obj += a;
		}
	}
	friend ostream& operator<<(ostream& out, const myString& obj) {
		for (var a = 0;a < obj.string.size();a++) {
			out << obj.string[a];
		}
		out << '\0';
		return out;
	}
};
