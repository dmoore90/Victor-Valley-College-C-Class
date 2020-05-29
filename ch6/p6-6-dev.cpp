#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int size;
	cout << "Enter size of a side: ";
	cin >> size;
	int v_size = pow(size, 2);
	vector<int> numbers(v_size);
	cout << "Enter numbers: \n";
	// for (int i = 0; i < v_size; i++)
	// {
	// 	cin >> numbers[i];
	// }
	for (int i = 0; i < v_size; i++) {
		numbers[i] += i;
	}
	void is_magic_num(vector<int> numbers, int size, int v_size);
	is_magic_num(numbers, size, v_size);
	// if (is_magic_num(numbers)) {
	// 	cout << "Yes, numbers form a magic square.\n";
	// }
	// else {
	// 	cout << "No, numbers don't form a magic square.\n";
	// }
}

void is_magic_num(vector<int> numbers, int size, int v_size) 
{
	
}


