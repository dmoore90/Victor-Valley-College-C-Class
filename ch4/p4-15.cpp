#include <iostream>

using namespace std;

int main()
{
	float p, t, r;

	cout << "Enter initial investment:\n";
	cin >> p;
	cout << "Enter the interest rate:\n";
	cin >> r;
	r = r / 100;

	while (p < 1000000) {
		p = p * r + p;
		t += 1;
	}
	cout << "You will reach 1 million dollars in "<< t << " years." << endl;
}