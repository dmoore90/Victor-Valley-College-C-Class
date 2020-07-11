#include <iostream>

using namespace std;

int main()
{
	int dayOfWeek;
	int daysInMonth;
	int counter = 0;
	string weekDayNames = "Su M  T  W  Th F  Sa";

	cout << "Enter the day of the week:\n";
	cin >> dayOfWeek;
	cout << "Enter days in month: \n";
	cin >> daysInMonth;

	string space;
	cout << weekDayNames << endl;
	for (int i = 0; i < dayOfWeek; i++)
	{
		space += "   ";
		counter += 1;
	}
	cout << space;

	for (int i = 1; i <= daysInMonth; i++)
	{	
		if (counter > 6)
		{
			counter = 0;
			cout << endl;
			if (i < 10)
			{
				cout << i << "  ";
			}
			if (i >= 10) 
			{
				cout << i << " ";
			}
		}
		else
		{
			if (i < 10)
			{
				cout << i << "  ";
			}
			else 
			{
				cout << i << " ";
			}
		}
		counter += 1;
	}
}