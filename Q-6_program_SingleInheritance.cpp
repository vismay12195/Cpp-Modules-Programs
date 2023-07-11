// Q-6_program_SingleInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Module 4.2.6 - Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best 
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)

#include<iostream>
#include<iomanip>
using namespace std;

class cricketer {
public:
	float matches;

	void getdata() {
		cout << "Enter total number of matches played: " << endl;
		cin >> matches;
	}
};

class batsman : public cricketer {
public:
	int best_performance;
	float total_runs, avg_runs;

	void putdata() {
		cout << "Enter the total runs: " << endl;
		cin >> total_runs;

		avg_runs = total_runs / matches;
		cout << "Batsman's average runs is: " << setprecision(4) << avg_runs << endl;

		cout << "Enter the best performance runs: " << endl;
		cin >> best_performance;
	}

};

int main() {
	batsman b1;
	b1.getdata();
	b1.putdata();
	return 0;
}


