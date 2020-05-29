#include <iostream>

using namespace std;

int main()
{
	int dayOfWeek;
	int daysInMonth;
	int counter = 0;
	string space;
	string weekDayNames = "Su M  T  W  Th F  Sa";

	cout << "Enter the day of the week:\n";
	cin >> dayOfWeek;
	cout << "Enter days in month: \n";
	cin >> daysInMonth;
	// dayOfWeek = 6;
	// daysInMonth = 28;

	
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
}