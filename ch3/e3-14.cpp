#include <iostream>
#include <string>

using namespace std;

int main() 
{
	int month;
	int day;
	string month_name;
	string season;
	cout << "Enter the number of month: " << endl;
	cin >> month;
	cout << "Enter the number of day: " << endl;
	cin >> day;

	if (month < 1 || month > 12) {
		cout << "There are only 12 months in a year." << endl;
		exit (EXIT_FAILURE);
	}

	if (month == 1)
	{
		month_name = "January";
	}
	else if (month == 2)
	{
		month_name = "February";
	}
	else if (month == 3)
	{
		month_name = "March";
	}
	else if (month == 4) 
	{
		month_name = "April";
	}
	else if (month == 5)
	{
		month_name = "May";
	} 
	else if (month == 6)
	{
		month_name = "June";
	}
	else if (month == 7)
	{
		month_name = "July";
	}
	else if (month == 8)
	{
		month_name = "August";
	}
	else if (month == 9)
	{
		month_name = "September";
	}
	else if (month == 10)
	{
		month_name = "October";
	}
	else if (month == 11)
	{
		month_name = "November";
	}
	else if (month == 12)
	{
		month_name = "December";
	}

	if (month >= 1 && month <= 3)
	{
		season = "Winter";
	}
	else if (month >= 4 && month <= 6)
	{
		season = "Spring";
	}
	else if (month >= 7 && month <= 9)
	{
		season = "Summer";
	}
	else if (month >= 10 && month <= 12)
	{
		season = "Fall";
	}
	if (month % 3 == 0 && day >= 21)
	{
		if (season == "Winter")
		{
			season = "Spring";
		}
		else if (season == "Spring")
		{
			season = "Summer";
		}
		else if (season == "Summer") 
		{
			season = "Fall";
		}
		else
			season = "Winter";
	}

	cout << "It's " + month_name + " " << day << " and it's " + season << endl;
	return 0;
}