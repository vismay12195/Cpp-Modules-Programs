// Module 4.2.10 - Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
#include<conio.h>

using namespace std;

class matrix {
	int a[2][1], i, j;
public:
	void accept();
	void display();
	void operator + (matrix x);
};
	void matrix::accept() 
	{
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 1; j++) {
				cin >> a[i][j];
			}
		}
	}
	void matrix::display()
	{
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 1; j++) {
				cout << a[i][j];
			}
			cout << "\n" << endl;
		}
	}

	void matrix::operator + (matrix x) {
		int op[2][1];
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 1; j++) {
				op[i][j] = a[i][j] + x.a[i][j];
			}
		}
			cout << "Sum of two matrix " << endl;
			for (i = 0; i < 2; i++) {
				for (j = 0; j < 1; j++) {
					cout << op[i][j];
					cout << "\t";
				}
				cout << "\n" << endl;
			}
	}

int main() {
	matrix matr1, matr2;
	cout << "Enter the first matrix elements: " << endl;
	matr1.accept();
	cout << "Enter the second matrix elements: " << endl;
	matr2.accept();
	cout << "First Matrix is: " << endl;
	matr1.display();
	cout << "Second Matrix is: " << endl;
	matr2.display();
	matr1 + matr2;
	return 0;
}