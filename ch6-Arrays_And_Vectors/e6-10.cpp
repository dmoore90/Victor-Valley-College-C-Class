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
	int c[size];
	int d[size];
	int tru;
	for (int i = 0; i < size; i ++){
		c[i] = a[i];
		d[i] = b[i];
	}

	while (c[0] != d[0]) {
		int z = size -1;
		int lst = d[0];
		for (int i = 0; i < size; i++) {
			d[i] = d[i+1];
			if (i == z) {
				d[i] = lst;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		if (c[i] == d[i]) {
			tru = 1;
		}
		else if (c[i] != d[i])
			tru = 0;
	}

	return tru;
}

