#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool is_palindrome(string str)
{
	string a_var;
	for (int i = str.length() -1; i >= 0; --i)
	{
		a_var += str[i];
	}

	return (a_var == str);
}


int main()
{
	if (is_palindrome("dad"))
	{
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}