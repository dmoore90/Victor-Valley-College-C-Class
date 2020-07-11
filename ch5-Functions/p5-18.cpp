#include <iostream>
#include <string>

using namespace std;

int main() 
{
	void zip_bar(string zip_code);
	string zip_code;
	cout << "Enter the zip code: ";
	cin >> zip_code;
	if (zip_code.length() > 5)
	{
		cout << "Invalid zip code entered.\n";
		exit (EXIT_FAILURE);
	}
	zip_bar(zip_code);
}

void zip_bar(string zip_code)
{
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
	string string2 = "||::::::||::|:|::||::|::|:|:|::||::|:::||::|:|:|::";
	int n = 0, n2;
	for (int i = 0; i < zip_code.length(); i++)
	{
		for (int j = 0; j < string2.length(); j++)
		{	
			n2 = j;
			int zipnum = stoi(zip_code.substr(i,1));
			if (zipnum*5 == j)
			{
				cout << string2.substr(j, 5);
			}
		}
	}
	cout << "|";
}