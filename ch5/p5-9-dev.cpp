#include <iostream>
#include <math.h>

using namespace std;

int main()
{

	int year, month;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Enter the month: ";
	cin >> month;

	int day_of_week(int year, int month, int day);
	void print_calandar(int day_of_week, int daysInMonth, int month);
	int month_days(int month, int year);
	
	print_calandar(day_of_week(year, month, 1), month_days(month, year), month);
}

int day_of_week(int year, int month, int day)
{
   int y = year;
   int m = month - 1;
   if (month < 3) { y--; m = m + 4; }
   return (y + y / 4 - y / 100 + y / 400
      + 3 * m + 4 - (m - m / 8) / 2 + day) % 7;
}

void print_calandar(int dayOfWeek, int daysInMonth, int month)
{
	int counter = 0;
	string space, month_name;
	string weekDayNames = "Su M  T  W  Th F  Sa";
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
		month_name = " March";
	}
	else if (month == 4)
	{
		month_name = " April";
	}
	else if (month == 5)
	{
		month_name = "   May";
	}
	else if (month == 6)
	{
		month_name = "  June";
	}
	else if (month == 7)
	{
		month_name = "  July";
	}
	else if (month == 8)
	{
		month_name = " August";
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
	cout << "      " << month_name << endl;
	cout << weekDayNames << endl;
	for (int i = 0; i < dayOfWeek; i++)
	{
		space += "   ";
		counter += 1;
	}
	cout << space;

	for (int i = 1; i <= daysInMonth; i++)
	{
		// new line block
		
		if (counter > 6)
		{
			counter = 0;
			cout << endl;
			// counter = 0;
			// spacing for single digits
			if (i < 10)
			{
				cout << i << "  ";
			}
			// spacing for double digits
			if (i >= 10) 
			{
				cout << i << " ";
			}
		}
		else
		{
		// spacing for single digits
			if (i < 10)
			{
				cout << i << "  ";
			}
			// spacing for double digits
			else 
			{
				cout << i << " ";
			}
		}
		counter += 1;
	}
	cout << endl;
}

int month_days(int month, int year)
{
  int days;
  if (month == 1 || month == 3 || month == 5
      || month == 7 || month == 8 || month == 10
      || month == 12)
  {
    days = 31;
  }
  else
  {
    if (month == 2)
    {
      if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
      {
        days = 29;
      }
      else if (year % 4 == 0 && year % 100 != 0)
      {
      	days = 29;
      }
      else
      {
        days = 28;
      }
    }
    else 
    {
      days = 30;
    }
  }
  return days;
}


