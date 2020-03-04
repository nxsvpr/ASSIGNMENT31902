#include <iostream>
using namespace std;

int main()

{
	int account_number;
	char account_type;
	float min_balance, current_balance, new_balance{};

	cout << "Enter your account number : ";
	cin >> account_number;
	cout << "\nChoose your account type : ";
	cin >> account_type;
	cout << "\nEnter the minimum account balance : ";
	cin >> min_balance;
	cout << "\nEnter the current balance : ";
	cin >> current_balance;

	if (account_type == 's')
		new_balance = current_balance + current_balance * 0.04;
	else if (account_type == 'c' && current_balance > min_balance+5000 )
		new_balance = current_balance + current_balance * 0.03;
	else if (account_type == 'c')
		new_balance = current_balance + current_balance * 0.05;

	cout << "\nYour total balance is RM " << new_balance;
	cout << "\nThank you." << endl;
	return 0;
}