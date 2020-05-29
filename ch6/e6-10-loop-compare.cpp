// current submission
#include <iostream>
#include <array>

using namespace std;

int main()
{
	int size;
	cout << "Enter same size of both arrays: \n";
	cin >> size;
	int a[size];
	int b[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter 'a' value: ";
		cin >> a[i];
	}
	for (int i = 0; i < size; i++) 
	{
		cout << "Enter 'b' value: ";
		cin >> b[i];
	}

	bool same_elements(int a[], int b[], int size);
	
	if (same_elements(a, b, size) == 1)
	{
		cout << "Arrays are a match." << endl;
	}
	else if (same_elements(a, b, size) == 0)
	{
		cout << "Arrays are not a match." << endl;
	}
}

bool same_elements(int a[], int b[], int size)
{
	int match = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (a[i] == b[j]) {
				a[i] = '-';
				b[j] = '-';
				match ++;
				break;
			}
		}
	}
	if (match == size) {
		return 1;
	}
	else if (match != size) {
		return 0;
	}
}

