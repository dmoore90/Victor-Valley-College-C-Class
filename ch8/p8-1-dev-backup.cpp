#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	string search_word = argv[1];
	string word, line;
	int c = 0;
	vector <string> vec;
	for (int i = 2; i < argc; i++)
	{
		ifstream in(argv[i]);
		while (in >> word)
		{
			if (word == search_word)
			{
				// getline(in, line);
				// cout << argv[i] << ": " << line << endl;
				c = 1;
			}
			if (c == 1)
			{
				getline(in, line);
				cout << line << endl;
				c = 0;
			}
		}
	}


}