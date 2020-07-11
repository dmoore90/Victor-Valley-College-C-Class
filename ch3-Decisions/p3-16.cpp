#include <iostream>

using namespace std;

int main()
{
	float checking_acc;
	float savings_acc;
	int opt_num;
	int opt_acc;
	float deposit_amount;
	float withdraw_amount;
	float transfer_amount;

	cout << "Enter checking account amount: \n";
	cin >> checking_acc;
	if (checking_acc < 0)
	{
		cout << "Must have a positive amount.\n";
		exit (EXIT_FAILURE);
	}
	cout << "Enter savings account amount: \n";
	cin >> savings_acc;
	if (savings_acc < 0)
	{
		cout << "Must have a positive amount.\n";
		exit (EXIT_FAILURE);
	}
	cout << "What would you like to do? Enter option number:\n";
	cout << "Option 1: Deposit.\n";
	cout << "Option 2: Withdraw.\n";
	cout << "Option 3: Transfer.\n";
	cin >> opt_num;
	cout << "From which account?\n";
	cout << "Option 1: Checking Account.\n";
	cout << "Option 2: Savings Account.\n";
	cin >> opt_acc;

	switch(opt_num)
	{
		case 1: // deposits money into checking or savings.
			switch(opt_acc)
			{
				case 1: cout << "Enter checking amount to deposit:\n";
						cin >> deposit_amount;
						if (deposit_amount < 0){
							cout << "Must have a positive amount.\n";
							exit (EXIT_FAILURE);
						}
						checking_acc = checking_acc + deposit_amount;
						cout << "Your new checking account balance is " << checking_acc << endl;
				break;

				case 2: cout << "Enter savings amount to deposit:\n";
						cin >> deposit_amount;
						if (deposit_amount < 0){
							cout << "Must have a positive amount.\n";
							exit (EXIT_FAILURE);
						}
						savings_acc = savings_acc + deposit_amount;
						cout << "Your new savings account balance is " << savings_acc << endl;
			    break;

			    default: cout << "Invalid acount option.\n";
			}
		break;

		case 2: // withdraws money from either checking or savings.
			switch(opt_acc)
			{
				case 1: cout << "Enter amount to withdraw.\n";
						cin >> withdraw_amount;
						if (withdraw_amount > checking_acc) {
							cout << "That amount exceeds balance.\n";
							exit (EXIT_FAILURE);
						}
						checking_acc = checking_acc - withdraw_amount;
						cout << "Your new checking account balance is " << checking_acc << endl;
				break;

				case 2: cout << "Enter amount to withdraw.\n";
						cin >> withdraw_amount;
						if (withdraw_amount > savings_acc) {
							cout << "That amount exceeds balance.\n";
							exit (EXIT_FAILURE);
						}
						savings_acc = savings_acc - withdraw_amount;
						cout << "Your new checking account balance is " << savings_acc << endl;
				break;

				default: cout << "Invalid acount option.\n";
			}
		break;

		case 3: // transfers money from either checking or savings.
			switch(opt_acc)
			{
				case 1: // transfer money from checking to savings.
					cout << "Enter amount to transfer to savings account.\n";
					cin >> transfer_amount;
					if (transfer_amount > checking_acc) {
						cout << "That amount exceeds the balance.";
						exit (EXIT_FAILURE);
					}
					checking_acc -= transfer_amount;
					savings_acc += transfer_amount;
					cout << "Your new checking account balance is " << checking_acc << endl;
					cout << "Your new savings account balance is " << savings_acc << endl;
				break;

				case 2: // transfer money from savings to checking.
					cout << "Enter amount to transfer to checking account.\n";
					cin >> transfer_amount;
					if (transfer_amount > savings_acc) {
						cout << "That amount exceeds the balance.\n";
						exit (EXIT_FAILURE);
					}
					savings_acc -= transfer_amount;
					checking_acc += transfer_amount;
					cout << "Your new checking account balance is " << checking_acc << endl;
					cout << "Your new savings account balance is " << savings_acc << endl;
				break;
			}
		break;
		default:
			cout << "Invalid option number.\n";
	}


}