// Module 4.2.3 - Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int mul(int x, int y) {
	return x*y;
}

int cube(int num) {
	return pow(num, 3);
}

int main() {
	cout << mul(33, 12) << endl;
	cout << cube(5) << endl;
}