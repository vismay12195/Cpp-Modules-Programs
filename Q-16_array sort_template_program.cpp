//  Module 4.2.16 - Write a program of to sort the array using templates.

#include<iostream>
#include<conio.h>
#include<array>

using namespace std;

template <typename T>

void Array_Des_Ass_Sort(T& m, T& n, T& o, T& p, T& q) {
	int i = 0, j = 0, arr[5]{}, temp{};
	cout << "Enter any 5 array element numbers: \n";

	for (i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	//Descending order logic
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4-i; j++) {
			if (arr[j+1] > arr[j]) {
				temp = arr[j] ;
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "\nSorting the Array in Descending order: \n";
	for (i = 0; i < 5; i++) {
		cout << arr[i] << "\t";
	}

	// Asscending order logic
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "\n\nSorted list in Asscending order: \n";
	for (i = 0; i < 5; i++) {
		cout << arr[i] << "\t";
	}
	cout << "\n\n";
}

int main() {
	double n1{}, n2{}, n3{}, n4{}, n5{};
	Array_Des_Ass_Sort(n1,n2,n3,n4,n5); // invoking the template function
}
