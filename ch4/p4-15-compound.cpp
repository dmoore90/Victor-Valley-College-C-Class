#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float p, t, r, a = 1000000, n = 1.00;

	cout << "Enter initial investment:\n";
	cin >> p;
	cout << "Enter the interest rate:\n";
	cin >> r;
	r = 5;
	r = r / 100;

	t = log(a/p) / (n * (log(1+r/n)));
	cout << "You will reach 1 million dollars in "<< t << " years." << endl;

}