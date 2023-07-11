// Module 4.2.14 - Write a program to find the max number from given two numbers using
// friend function

#include<iostream>
#include<conio.h>
using namespace std;

class MaxNumber {
private :
	double n1, n2;
public:
	void get_data() {
		cin >> n1 >> n2;
	}
	void display_data() {
		cout << "Number 1 is: " << n1 << endl << "Number 2 is: " << n2 << endl;
	}
	friend void Max(MaxNumber& m);
};

void Max(MaxNumber& m) {
	if (m.n1 > m.n2) {
		cout << m.n1;
	}
	else {
		cout << m.n2;
	}
}

int main() {
	MaxNumber max{};
	cout << "Input the two numbers: " << endl;
	max.get_data();
	max.display_data();
	cout << "\nMaximum number from entered numbers is: " << endl;
	Max(max);
	
	return 0;
}