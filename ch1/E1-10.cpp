#include <iostream>
#include<vector>
using namespace std;

vector<string> state_taxes = {"Alabama:   5.14%", "Louisiana: 5.00%", "Colorado:  4.73%", "New York:  4.49%", "Oklahoma:  4.42%"};


int main() {
	cout << " Sales Tax Rates \n";
	cout << "----------------- \n";
	for (auto x : state_taxes)
	{
		cout << x << " " << "\n";
	}
	return 0;
}