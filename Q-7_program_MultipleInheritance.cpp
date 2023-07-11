// Q-7_program_MultipleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Module 4.2.7 - Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)


#include<iostream>
using namespace std;

class person {
public:

	string name;
	int age;

	void getdata() {
		cout << "Person name and age is:" << endl;
		cin >> name >> age;
	}
};

class student {
public:

	int percentage;

	void marks() {
		cout << "Student Percentage is:" << endl;
		cin >> percentage;
	}
};

class teacher :public student, public person {
public:
	float salary;

	void earning() {
		cout << "Teacher salary is:" << endl;
		cin >> salary;
	}
};

int main() {

	teacher t1;
	t1.getdata();
	t1.marks();
	t1.earning();
	return 0;
}