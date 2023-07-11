// Module 4.2.9 - Write a program to Mathematic operation like Addition, Subtraction, 
// Multiplication, Division Of two number using different parameters and
// Function Overloading

#include<iostream>
#include<iomanip>
#include<math.h>
#include<conio.h>

using namespace std;
class Op {
public:
	void operation(int n1, int n2) {
		cout << "Addition value is: " << n1 + n2 << endl;
		cout << "Subtraction value is: " << n1 - n2 << endl;
	}

	void operation(float n3, float n4) { //Function overloading
		cout << "Multiplication value is: " << n3 * n4 << endl;
		cout << "Division value is: " << n3 / n4 << endl;
	}
};

int main() {
	Op o1;
	o1.operation(33, 44); // Passing different parameters
	float n5 = 50.2;
	float n6 = 5.1; 
	o1.operation(n5, n6); // Passing different parameters
}