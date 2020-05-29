#include <iostream>
using namespace std;

int num = 0;
int var1;
int counter = 0;

int main()
{
	while(counter < 10) {
		cin >> var1;
		if (var1 > num) {
			num = var1;
		}
		counter += 1;		
	}
	cout << num << endl;
	return 0;
}

