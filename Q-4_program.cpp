// Module 4.2. 4 & 5 - Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
//#include<math.h>

using namespace std;

class Calculate { // creating a class
private:
	int n1;
	int n2;

public:
	Calculate(int x, int y) { // Creating a Constructor with parameters
		cout << "enter the number 1: " << endl;
		cin >> x;
		cout << "enter the number 2: " << endl;
		cin >> y;

		n1 = x; // Passing the value of x to n1
		n2 = y; // Passing the value of y to n2

		cout << "Addition value is: " << n1 + n2 << endl; // performing the addition
		cout << "Subtraction value is: " << n1 - n2 << endl; // performing the subtraction
		cout << "Multiplication value is: " << n1 * n2 << endl; // performing the multiplication
		cout << "Division value is: " << n1 / n2 << endl; // performing the division
	}
};

int main() {
	int x=0, y=0; // Initialized the parameters in order to call the constructor properly
	Calculate input{ x,y }; // Calling the constructor method by using the same class name with an object
}