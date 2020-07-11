#include <iostream>
using namespace std;

int main()
{
	float amount_due;
	float amount_received;
	float amount_change;
	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	int amount_cents;

	cout << "Enter amount due: \n";
	cin >> amount_due;
	cout << "Enter amount given: \n";
	cin >> amount_received;

	amount_change = amount_received - amount_due;

	amount_cents = amount_change * 100;

	dollars = amount_cents / 100;
	amount_cents = amount_cents % 100;
	quarters = amount_cents / 25;
	amount_cents = amount_cents % 25;
	dimes = amount_cents / 10;
	amount_cents = amount_cents % 10;
	nickels = amount_cents / 5;
	amount_cents = amount_cents % 5;
	cout << "dollars: " << dollars << endl;
	cout << "quarters: " << quarters << endl;
	cout << "dimes: " << dimes << endl;
	cout << "nickels: " << nickels << endl;
	cout << "pennies: " << amount_cents << endl;
	return 0;
}