#include <iostream>

using namespace std;

int main()
{
	float p, t, r, a;

	cout << "Enter initial investment:\n";
	cin >> p;
	cout << "Enter the interest rate:\n";
	cin >> r;
	r = r / 100;

	t = (1 / r) * (a / p -1);
	cout << "You will reach 1 million dollars in "<< t << " years." << endl;
	t = 0;
}