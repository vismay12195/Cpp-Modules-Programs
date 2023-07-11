// Module 4.2.1 - WAP to create simple calculator using class

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class start {
	int i, n, option, v, sum = 0, sub = 0, mul = 1, mod;
	float div;
public:
	int calC() {

		do {
			// Header part for performing particular option
			cout << "\t\t\t=====SIMPLE CALCULATOR PROGRAM=====" << endl;
			cout << "\n\n\n\t\t\t     1.ADDITION" << endl;
			cout << "\t\t\t     2.SUBTRACTION" << endl;
			cout << "\t\t\t     3.MULTIPLICATION" << endl;
			cout << "\t\t\t     4.DIVISION" << endl;
			cout << "\t\t\t     5.MODULO" << endl;
			cout << "\t\t\t     6.EXIT" << endl;
			cout << "\t\t\t    ___________________\n\n\n\n";

			cout << "Select your option" << endl;
			cin >> option;

			switch (option)
			{

			case 1: //Addition
				cout << "You have selected ADDITION" << endl;
				cout << "How many numbers would you like to add?: " << endl;
				cin >> n;
				for (i = 1; i <= n; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					sum += v;
				}
				cout << "Addition value is: " << sum << endl << endl;
				break;

			case 2: //Subtraction
				cout << "You have selected SUBTRACTION" << endl;
				cout << "How many numbers would you like to subtract?: " << endl;
				cin >> n;
				for (i = 1; i <= 1; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					sub += v;
				}
				for (i = 2; i <= n; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					sub -= v;
				}
				cout << "Subtraction value is: " << sub << endl;
				break;

			case 3: //Multiplication
				cout << "You have selected MULTIPLICATION" << endl;
				cout << "How many numbers would you like to multiply?: " << endl;
				cin >> n;
				for (i = 1; i <= n; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					mul *= v;
				}
				cout << "Multiplication value is: " << mul << endl;
				break;

			case 4: //Division
				cout << "You have selected DIVISION" << endl;
				cout << "How many numbers would you like to divide?: " << endl;
				cin >> n;
				for (i = 1; i <= 1; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					div = (float)v; // Storing the value of v1 in the div.
				}

				for (i = 2; i <= n; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					div /= (float)v;
				}

				cout << "Division value is: " << setprecision(4) << div << endl;
				break;

			case 5: // Modulo
				cout << "You have selected MODULO" << endl;
				cout << "How many numbers would you like to enter and find its modulo?: " << endl;
				cin >> n;
				for (i = 1; i <= 1; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					mod = v;
				}
				for (i = 2; i <= n; i++) {
					cout << "Enter the number: " << i << endl;
					cin >> v;
					mod %= v;
				}
				cout << "Modulo value is: " << mod << endl;
				break;

			case 6: //Exit the program
				cout << "Thank you for using the Calculator................\n\n\n";
				//return 0;
				break;

			default:
				cout << "Invalid option entry!!";
				break;
			}
		}
		while (option != 0 && option <= 6);

		return 0;
	}
};


int main() {

	start s1;
	s1.calC();
}