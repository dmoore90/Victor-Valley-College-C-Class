#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void output_statement(vector<string> items, vector<int> qty, vector<double> price)
{
	cout << "Item              Qty   Price       Total" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << left << setw(18) << items[i] << setw(6) << qty[i] << setw(1) << "$" << setw(11) << price[i] << setw(1) << "$" << setw(10) << price[i]*qty[i] << endl;
	}
}


int main() 
{
	vector<string> items = {"Toaster", "Hair Dryer", "Car Vacuum"};
	vector<int> qty = {3, 1, 2};
	vector<double> price = {29.92, 24.95, 39.98};
	output_statement(items, qty, price);
}