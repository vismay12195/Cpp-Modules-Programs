// Module 4.2.15 - Write a program of to swap the two values using templates

#include<iostream>
#include<conio.h>
using namespace std;

template <typename T>
void Swap(T& m,T& n)
{
	T temp;
	temp = m;
	m = n;
	n = temp;
}

int main() {
	int a, b;
	cout << "Enter the value of a: " << endl;
	cin >> a;
	cout << "Enter the value of b: " << endl;
	cin >> b;
	Swap(a, b);
	cout << "\n\nAfter Swapping: \n" << "\nvalue of a: " << a << "\nvalue of b: " << b << endl;

	return 0;
}