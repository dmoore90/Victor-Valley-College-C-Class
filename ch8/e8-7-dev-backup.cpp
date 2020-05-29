#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

	string line;
	ifstream infile;
	infile.open("input.txt");

	ofstream outfile;
	outfile.open("output.txt");

	while (getline(infile, line)) {
		outfile << line << endl;
	}
	
	
	outfile.close();

}