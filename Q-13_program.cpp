// Module 4.2.13 - Write a program to swap the two numbers using friend function without
// using third variable

#include<iostream>
#include<conio.h>
using namespace std;

class SwapNumbers {
private:
	int n1, n2;
public:
	void get_data() {
		cin >> n1 >> n2;
	}
	void show_data() {
		cout << "Number 1 is: " << n1 << endl << "Number 2 is: " << n2 << endl;
	}
	// Use of Friend function to give access of Class's private and public part to the function defined

	friend void swap(SwapNumbers& s); 
};

void swap(SwapNumbers& s) {
	// Without using the Third variable
	s.n2 = s.n1 + s.n2;
	s.n1 = s.n2 - s.n1;
	s.n2 = s.n2 - s.n1;
}

int main() {
	SwapNumbers sw_num{};
	cout << "Input the two numbers: " << endl;
	sw_num.get_data();
	cout << "\nBefore Swapping: \n" << endl;
	sw_num.show_data();
	swap(sw_num); // Passing the Class object in the function as a parameter for swapping process
	cout << "\nAfter Swapping: \n" << endl;
	sw_num.show_data();
	return 0;
}