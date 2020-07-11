#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char* find_last(char s[], char c);
	char c;
	string word;
	cout << "Enter character array as a word: \n";
	cin >> word;
	char s[word.size() + 1];
	strcpy(s, word.c_str());
	cout << "Enter character to be searched for:\n";
	cin >> c;
	cout << find_last(s, c) << endl;

}

char* find_last(char s[], char c)
{
	char* p = nullptr;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] == c) 
		{
			p = &s[i];
			return p;
		}
	}
	return p;
}