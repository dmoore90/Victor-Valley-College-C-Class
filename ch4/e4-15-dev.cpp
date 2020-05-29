#include <iostream>
#include <string>

using namespace std;

int main()
{
	string characters;
	cout << "Enter sequence of words:\n";
	getline(cin, characters);
	characters += " ";

	float max_word_len = 0;
	int word_len = 0;
	float current_word = 0;
	string leading_space;
	string trailing_space;
	int i;
	string space;
	string str;
	float ns;
	
	// Finds max word length
	for (i = 0; i < characters.length(); i++) 
	{
		if (characters.substr(i, 1) == " ") 
		{
			if (word_len > max_word_len)
				{
					max_word_len = word_len;
					word_len = 0;
				}
		}
		else
		{
			word_len++;
		}
	}
	if (word_len > max_word_len)
	{
		max_word_len = word_len;
	}

	//top line
	cout << "+";
	for (i = 0; i < max_word_len; i++)
	{
		cout << "-";
	}
	cout << "+";
	cout << endl;

	for (i = 0; i <= characters.length(); i++)
	{
		if (characters.substr(i, 1) != " ")
		{
			str += characters.substr(i,1);
			current_word += 1;
		}
		else
		{
			ns = ((max_word_len - current_word) / 2.0);
			for (int n = 0; n < ns; n++){
				leading_space += " ";
			}
			ns = ((max_word_len - current_word) / 2.0 - 0.5);
			for (int n = 0; n < ns; n++){
				trailing_space += " ";
			}
			cout << "|" + leading_space + str + trailing_space + "|";
			current_word = 0;
			str = "";
			leading_space = "";
			trailing_space = "";

			cout << endl;
		}
	}

	// bottom line
	// cout << endl;
	cout << "+";
	for (i = 0; i < max_word_len; i++)
	{
		cout << "-";
	}
	cout << "+";
	cout << endl;
}