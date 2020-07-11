#include <iostream>
#include <string>
using namespace std;

string phone_num;
string zipcode;
string first_three;
string last_four;

int main()
{
	cout << "Enter phone number: \n";
	cin >> phone_num;
	zipcode = phone_num.substr(0,3);
	first_three = phone_num.substr(3, 3);
	last_four = phone_num.substr(6,-1);
	cout << "(" + zipcode + ") " + first_three + "-" + last_four << endl;
	return 0;
}

