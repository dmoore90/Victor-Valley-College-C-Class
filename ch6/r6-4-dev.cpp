#include <iostream>
#include <array>

using namespace std;

int main()
{
	int a [] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };

	for (int i = 0; i < size(a); i++) { cout << a[i] << ", ";}
	cout << endl << size(a) << endl;

	for (int i = 1; i < 5; i++) { a[i] = a[9-i]; }

	for (int i = 0; i < size(a); i++) { cout << a[i] << ", ";}
	cout << endl << size(a) << endl;
}	