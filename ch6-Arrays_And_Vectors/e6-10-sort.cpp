#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4 };
	int b[] = { 2, 1, 3, 3 };
	int sIze = size(a);
	int size = sIze;
	bool same_elements(int a[], int b[], int size);

	if (same_elements(a, b, size))
	{
		cout << "Arrays are a match." << endl;
	}
	else 
	{
		cout << "Arrays are not a match." << endl;
	}

}

bool same_elements(int a[], int b[], int size)
{
	sort(a, a + size);
	sort(b, b + size);

	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
}

