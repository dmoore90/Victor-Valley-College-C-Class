#include <iostream>

using namespace std;

int main()
{
	int numbers[16];
	cout << "Enter numbers 1 through 16: \n";
	for (int i = 0; i < size(numbers); i++)
	{
		cin >> numbers[i];
		while (numbers[i] > 16 || numbers[i] <= 0) 
		{
			cout << "Number must be between 1 and 16.\n";
			cin >> numbers[i];
		}
	}

	bool is_magic_num(int numbers[]);
	if (is_magic_num(numbers)) {
		cout << "Yes, numbers form a magic square.\n";
	}
	else {
		cout << "No, numbers don't form a magic square.\n";
	}
}

bool is_magic_num(int numbers[]) 
{
	int sum, sum1, sum2, sum3, x = 1, y = 1, z = 1, tru = 1;

	sum = numbers[0] + numbers[4] + numbers[8] + numbers[12];
	sum1 = numbers[1] + numbers[5] + numbers[9] + numbers[13];
	sum2 = numbers[2] + numbers[6] + numbers[10] + numbers[14];
	sum3 = numbers[3] + numbers[7] + numbers[11] + numbers[15];
	if (sum != sum2 || sum2 != sum3) {
		x = 0;
	} 

	sum = numbers[0] + numbers[1] + numbers[2] + numbers[3];
	sum1 = numbers[4] + numbers[5] + numbers[6] + numbers[7];
	sum2 = numbers[8] + numbers[9] + numbers[10] + numbers[11];
	sum3 = numbers[12] + numbers[13] + numbers[14] + numbers[15];
	if (sum != sum2 || sum2 != sum3) {
		y = 0;
	}

	sum = numbers[0] + numbers[5] + numbers[10] + numbers[15];
	sum1 = numbers[3] + numbers[6] + numbers[9] + numbers[12];
	if (sum != sum1) {
		z = 0;
	}

	if (x != 1 || y != 1 || z != 1) {
		tru = 0;
	}

	return tru;
}



