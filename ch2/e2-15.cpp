#include <iostream>
using namespace std;

int num;

int main()
{
	cout << "Enter number: \n";
	cin >> num;
	int num_1 = num % 10;
	int num_2 = num / 10 % 10;
	int num_3 = num / 100 % 10;
	int num_4 = num / 1000 % 10;
	int num_5 = num / 10000 % 10;
	cout << num_5 << " " << num_4 << " " << num_3 << " " << num_2 << " " << num_1 << endl;
	return 0;
}