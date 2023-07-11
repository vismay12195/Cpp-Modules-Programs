// Module 4.2.2 - Define a class to represent a bank account. Include the following members:
//1. Data Member :
//-Name of the depositor
//- Account Number
//- Type of Account
//- Balance amount in the account
//2. Member Functions
//- To assign values
//- To deposited an amount
//- To withdraw an amount after checking balance
//- To display name and balance

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class bank {
public:

	int member() {

		char name[30], account_type[10];
		int account_num;
		float balance;

		// Assigning the values as requested
		cout << "Account holder name: " << endl;
		cin.getline(name,30);
		cout << "Account number: " << endl;
		cin >> account_num;
		cout << "Account type: " << endl;
		cin.ignore();
		cin.getline(account_type, 10);
		cout << fixed << "Balance amount: " << endl;
		cin >> balance;

		float d_amount; // deposit amount6
		cout << fixed << "Enter the amount to be deposited: " << endl;
		cin >> d_amount;

		float new_balance;
		new_balance = balance + d_amount;
		cout << fixed << "Total balance after the deposited amount: \n" << new_balance << endl;

		float w_amount; // Withdraw amount
		cout << fixed << "Enter the withdrawal amount: " << endl;
		cin >> w_amount;

		float final_balance; //balance after withdrawal
		final_balance = new_balance - w_amount;
		cout << "Name of the account holder is: \n" << name << endl;
		cout << fixed << "Final balance in the account is: \n" << final_balance << endl;

		return 0;
	}
};

int main() {
	bank b1;
	b1.member();
}

