// Module 4.2.11 - Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Strings {
public:
	char str[30];
public:
	void accept() {
		cout << "Enter the string: ";
		cin.getline(str, 30);
	}

	void display() {
		cout << str << "\t";
	}

	Strings operator + (Strings x) {
		Strings s{};
		strcat_s(str, x.str);
		strcpy_s(s.str, str);
		return s;
	}
};
int main() {
	Strings str_1{}, str_2{}, str_3{};
	str_1.accept();
	str_2.accept();

	cout << "\nFirst string: " << endl;
	str_1.display();

	cout << "\nSecond string: " << endl;
	str_2.display();

	str_3 = str_1 + str_2;
	cout << "\n\nConcatenated string: ";
	str_3.display();

	return 0;


}