#include <iostream>
#include <string>

using namespace std;

class Microwave
{
private:
   int time;
   int power_level;
public:
   Microwave () {
   		cout << "Enter options: " << endl
   		<< "1: increase time by 30 seconds" << endl
   		<< "2: increase power level" << endl
   		<< "3: start" << endl
   		<< "4: reset:" << endl
   		<< "5: stop" << endl;
		time = 0;
		power_level = 0;
   }

   void increase_time()
   {
   		time += 30;
   		cout << "Time: " << time << endl;
   }

   void switch_power_level()
   {
   		power_level += 1;
   		cout << "Power level " << power_level << endl;
   }

   void start()
   {
   		if (power_level == 0) {
   			cout << "Error no power level is zero" << endl;
   		}
   		else if (time == 0) {
   			cout << "Error no time selected" << endl;
   		}
   		else {
   			cout << "Cooking for " << time << " seconds at level " 
   			<< " power_level " << power_level << endl;
   		}
   }
   void reset()
   {
   		time = 0;
   		power_level = 0;
   		cout << "Time: " << time << endl
   		<< "Power level: " << power_level << endl;
   }

};

int main()
{
	Microwave microwave;
	int option;
	cin >> option;
	while (option <= 0 || option > 5){
		cout << "Invalid option. Try again" << endl;
		cin >> option;
	}
	while (option != 5){
		switch(option) {
			case 1: microwave.increase_time();
					break;
			case 2: microwave.switch_power_level();
					break;
			case 3: microwave.start();
					break;
			case 4: microwave.reset();
					break;
		}
		cin >> option;
		while (option <= 0 || option > 5){
			cout << "Invalid option. Try again" << endl;
			cin >> option;
		}
	}
	cout << "Good-bye" << endl;
}