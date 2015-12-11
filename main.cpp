#include <iostream>
#include <windows.h>
#include "myString.h"
using namespace std;
void main() {
	myString p("hi!");
	cout << p << endl;
	p = "hello!";
	cout << p<<endl;
	cin >> p;
	//p += " Anton!";
	cout << p << endl;
	system("pause");
}