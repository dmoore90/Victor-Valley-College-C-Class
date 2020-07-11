#include <iostream>
using namespace std;

float balance = 10000;
float r = 1.005;
float t = 0;
float withdraw = 500;

int main() {
	while (balance > withdraw) {
		balance = (balance * r) - 500;
		t++;
	}
	t = t/12;
	cout << "Account will be depleted in " << t << " years." << "\n";
	return 0;
}
