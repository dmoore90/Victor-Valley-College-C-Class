#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	// string line; 

	// ifstream in("input.txt");
	// ofstream out("output.txt");

	// in.seekg(0, in.end);
	// int pos = in.tellg();

	// for (int i = 0; i < pos; i++)
	// {
	// 	line=in.get();
	// 	cout << line;
	// 	in.seekg(-2, in.end);
	// }
   ifstream in;
   ofstream out;
    in.open("input.txt");
    out.open("output.txt");
    char ch;
    int pos;
    string line, nline, last;
    int size;
    in.seekg(-1,ios::end);
    pos=in.tellg();
    vector <char> vec_char;
    for(int i=0;i<=pos;i++)
    {
        ch=in.get();
        // cout<<ch;
        if (ch == '\n'){
            int size = line.length() - 1;
            for (int i = size; i >= 0; i --)
            {
                nline += line[i];
            }
            out << nline << endl;

            nline = "";
            line = "";
        }
        else if (ch != '\n')
        {
            line += ch;
        }
        in.seekg(-2,ios::cur);
    }
    size = line.length() - 1;
    for (int i = size; i >= 0; i --)
    {
        nline += line[i];
    }
    out << nline << endl;
    in.close();
}
