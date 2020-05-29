#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string zip_code;
	cout << "Enter the zip code: ";
	cin >> zip_code;
	// if (zip_code.length() > 5)
	// {
	// 	cout << "Invalid zip code entered.\n";
	// 	exit (EXIT_FAILURE);
	// }
	void zip_bar(string zip_code);
	zip_bar(zip_code);
}

void zip_bar(string zip_code)
{
	string zero = "||:::";
	string one = ":::||";
	string two = "::|:|";
	string three = "::||:";
	string four = ":|::|";
	string five = ":|:|:";
	string six = ":||::";
	string seven = "|:::|";
	string eight = "|::|:";
	string nine = "|:|::";
	string str_check_dig;
	int int_zip = stoi(zip_code);
	int check_dig = 0;
	int m, sum =0;

	while (int_zip>0)
	{
		m = int_zip % 10;
		sum+=m;
		int_zip = int_zip / 10;
	}
	check_dig = (sum + (10 - sum % 10)) - sum;
	str_check_dig = to_string(check_dig);
	zip_code += str_check_dig;
	cout << "|";
	for (int i = 0; i <= zip_code.length(); i++)
	{
		if (zip_code.substr(i,1) == "9")
			{
				cout << nine;

			}
		else if (zip_code.substr(i,1) == "8")
		{
			cout << eight;
		}
		else if (zip_code.substr(i,1) == "7")
		{
			cout << seven;
		}
		else if (zip_code.substr(i,1) == "6")
		{
			cout << six;
		}
		else if (zip_code.substr(i,1) == "5")
		{
			cout << five;
		}
		else if (zip_code.substr(i,1) == "4")
		{
			cout << four;
		}
		else if (zip_code.substr(i,1) == "3")
		{
			cout << three;
		}
		else if (zip_code.substr(i,1) == "2")
		{
			cout << two;
		}
		else if (zip_code.substr(i,1) == "1")
		{
			cout << one;
		}
		else if (zip_code.substr(i,1) == "0")
		{
			cout << zero;
		}
	}
	cout << "|" << endl;

}