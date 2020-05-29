#include <iostream>
#include <string>
using namespace std;

string user_name;
int main () 
{
	cout << "Hello, my name is Hal!\n";
	cout << "What is your name: \n";
	cin >> user_name;
	cout << "Hello, " << user_name << ", I am glad to meet you!\n";
}