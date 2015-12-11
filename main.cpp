#include <iostream>
#include <windows.h>
#include "myString.h"
using namespace std;
void main() {
	myString p("hi!");
	//cout << p << endl;
	p = "hello!";
	//cout << p<<endl;
	cin >> p;
	cout << p + " is your name" << endl;
	cout << "You are " + p + "! And this is a test!"<< endl;
	if (p == "Anton") { cout << "zdrasti antone!\n"; }
	p[3] = '0';
	cout << p<<endl;

	system("pause");
}