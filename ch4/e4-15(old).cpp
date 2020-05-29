#include <iostream>

using namespace std;

int main()
{
	string seq_of_words;
	cout << "Enter sequence of words:\n";
	getline(cin, seq_of_words);
	
	// top bar
	cout << "+";
	for (char c : seq_of_words) {
		cout << "-";
	}
	
	// words with side bars
	cout << "+";
	cout << endl;

	cout << "|" + seq_of_words + "|" << endl;

	// bottom bar
	cout << "+";
	for (char c : seq_of_words) {
		cout << "-";
	}
	cout << "+";
	cout << endl;
}