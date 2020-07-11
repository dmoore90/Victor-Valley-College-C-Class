#include <iostream>
#include <string>

using namespace std;

class Microwave
{
private:
   int time;
   string power_level;
public:
   Microwave () {
		time = 30;
		power_level = "low";
   }

   void increase_time()
   {
   		time += 30;
   }

   void switch_power_level()
   {
   		if (power_level == "low") {
            power_level = "high";
         } else {
            power_level = "low";
         }
   }

   void start()
   {
		cout << "Cooking for " << time << " seconds at level " 
		<< " power_level " << power_level << endl;
   }
   void reset()
   {
   		time = 30;
   		power_level = "low";
   }
};

int main()
{
   cout << "Enter options: " << endl
   << "1: increase time by 30 seconds" << endl
   << "2: Switch Power level" << endl
   << "3: start" << endl
   << "4: reset:" << endl
   << "5: stop" << endl;
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