#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string str)
{
	int len = str.length();
	int last = str.length() -1;
	int first = 0;

	if (len == 0) 
	{
		return true;
	}

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
		return is_palindrome(str.substr(first+1, last-1));
	}

	return true;
}

int main() 
{
	string word;
	cout << "Enter the word: ";
	cin >> word;

	if (is_palindrome(word))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}
