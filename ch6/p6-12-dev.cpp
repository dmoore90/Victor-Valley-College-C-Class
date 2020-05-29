#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	vector<double> sales;
	vector<string> customers;
	string cust_name, input, first_name, last_name;
	double sale_amt;
	string name_of_best(vector<string> customers, vector<double> sales);
	input = "yes";
	while (input == "yes") 
	{
		cout << "Enter q to save and quit.\n";

		cout << "Enter first name of customer.\n";
		cin >> first_name;
		cout << "Enter last name of customer.\n";
		cin >> last_name;
		cust_name = first_name + " " + last_name;
		customers.push_back(cust_name);

		cout << "Enter sale of customer.\n";
		cin >> sale_amt;
		sales.push_back(sale_amt);

		cout << "Continue? Type yes or no.\n";
		cin >> input;
	}

	name_of_best(customers, sales);
}

string name_of_best(vector<string> customers, vector<double> sales)
{
	double largest = 0, place;
	for (int i = 0; i < sales.size(); i++)
	{
		if (sales[i] > largest) 
		{
			largest = sales[i];
			place = i;
		}
	}
	cout << customers[place] << "     " << largest << endl;
}