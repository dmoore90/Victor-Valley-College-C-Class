#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string zip = "92301";
	//                  0     1     2     3     4     5     6    7      8     9   
//	string string2 = "||::: :::|| ::|:| ::||: :|::| :|:|: :||:: |:::| |::|: |:|::";
	string string2 = "||::::::||::|:|::||::|::|:|:|::||::|:::||::|:|:|::";
	int n = 0, n2;
	for (int i = 0; i < zip.length(); i++)
	{
		for (int j = 0; j < string2.length(); j++)
		{	
			n2 = j;
			int zipnum = stoi(zip.substr(i,1));
			if (zipnum*5 == j)
			{
				cout << string2.substr(j, 5);
			}
		}
	}
}
