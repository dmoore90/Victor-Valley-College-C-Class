#include <iostream>
#include <string>
using namespace std;

int main()
{
	string status;
	string tax_bracket;
	float taxable_income;
	float tax;

	cout << "Enter single or married for status:\n";
	cin >> status;

	if (status == "single")
	{
		cout << "Enter taxable income: \n";
		cin >> taxable_income;
		
		if (taxable_income > 0 && taxable_income <= 8000)
		{
			tax = 0.1 * taxable_income;
			tax_bracket = "10%";
		}
		else if (taxable_income <= 32000)
		{
			tax = 800 + 0.15 * (taxable_income - 8000);
			tax_bracket = "15%";
		}
		else if (taxable_income > 32000)
		{
			tax = 4400 + 0.25 * (taxable_income - 32000);
			tax_bracket = "25%";
		} 
		else 
		{
			cout << "Taxable income must be greater than zero.\n";
			exit (EXIT_FAILURE);
		}
	}
	else if (status == "married")
	{
		cout << "Enter taxable income: \n";
		cin >> taxable_income;

		if (taxable_income > 0 && taxable_income <= 16000)
		{
			tax = 0.1 * taxable_income;
			tax_bracket = "10%";
		}
		else if (taxable_income <= 64000)
		{
			tax = 1600 + 0.15 * (taxable_income - 16000);
			tax_bracket = "15%";
		}
		else if (taxable_income > 64000)
		{
			tax = 8800 + 0.25 * (taxable_income - 64000);
			tax_bracket = "25%";
		}
		else
		{
			cout << "Taxable income must be greater than zero.\n";
			exit (EXIT_FAILURE);
		}
	} 
	else 
	{
		cout << "Invalid marital status.\n";
		exit (EXIT_FAILURE);
	}

	cout << "Your tax bracket is " << tax_bracket << " and your tax is $" << tax << endl;
}