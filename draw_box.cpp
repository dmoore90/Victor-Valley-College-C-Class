#include <iostream>

using namespace std;

int main()
{
	string seq_of_words;
	cout << "Enter sequence of words:\n";
	// cin >> seq_of_words;
	seq_of_words = "daniel";

	// top bar
	cout << "+";
	for (char c : seq_of_words) {
		cout << "--";
	}
	cout << "+";
	cout << endl;

	// side bars
	for (char c : seq_of_words) {
		cout << "|";
		for (char c : seq_of_words) {
			cout << "  ";
		}
		cout << "|" << endl;
	}

	// bottom bar
	cout << "+";
	for (char c : seq_of_words) {
		cout << "--";
	}
	cout << "+";
	cout << endl;
}