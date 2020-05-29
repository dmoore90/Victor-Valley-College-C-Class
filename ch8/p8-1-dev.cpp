#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	string search_word = argv[1];
	string word, line;
	int c = 2, i = 2;
	vector <string> vec_line;

	while (i < argc)
	{
		ifstream in(argv[i]);
		string file_name = argv[i];
		while(getline(in, line))
		{
			// convert line into vec of strings
			for (int i = 0; i < line.size(); i++)
			{
				if (line.substr(i,1) == " ")
				{
					vec_line.push_back(word);
					word = "";	
				}
				else if (line.substr(i,1) != " ")
				{
					word += line[i];
				}
			}
			vec_line.push_back(word);

			// search for word and print line
			for (int i = 0; i < size(vec_line); i++)
			{
				if (vec_line[i] == search_word)
				{
					cout << file_name << ": " << line << endl;
				}
			}
			// clear word and vector for next line
			word = "";
			vec_line.clear();
		}

		// while (in >> word)
		// {
		// 	if (word == search_word)
		// 	{
		// 		// getline(in, line);
		// 		// cout << argv[i] << ": " << line << endl;
		// 		break;
		// 	}
		// }
		i ++;
	}


}