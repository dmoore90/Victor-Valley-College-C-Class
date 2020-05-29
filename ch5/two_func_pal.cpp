#include <iostream>
#include <string>

using namespace std;

bool p_rec(string str, int first, int last)
{
	if (first == last)
	{
		return true;
	}

	if (str[first] != str[last])
	{
		return false;
	}

	if (first < last + 1)
	{
		return p_rec(str, first + 1, last -1);
	}
	return true;
}

bool is_palindrome(string str)
{
	int len = str.length();
	if (len == 0)
	{
		return true;
	}
	return p_rec(str, 0, len - 1);
}

int main() 
{
	if (is_palindrome("dad"))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
}
