// Module 4.2.12 - Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

#include<iostream>
#include<conio.h>
constexpr auto PI = 3.14; //  defining the value of PI
using namespace std;

float Area(int radius) {
	return PI * (radius * radius); // Area of Circle
}

float Area(int l, int w) {
	return (l * w); // Area of Rectangle
}

float Area(double b, double h) {
	return (0.5 * b * h); //  Area of Triangle
}

int main() {
	cout << "Area of circle is: \n" << Area(6) << endl;
	cout << "Area of rectangle is: \n" << Area(7,7) << endl;
	cout << "Area of triangle is: \n" << Area(1.4, 2.5) << endl;
}

