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
    in.open("input.txt");
    char ch;
    int pos;
    in.seekg(-1,ios::end);
    pos=in.tellg();
    vector <char> vec_char;
    for(int i=0;i<pos;i++)
    {
        ch=in.get();
        // cout<<ch;

        if (ch != '\n')
        {
        	vec_char.push_back(ch);
        }
        else if (ch == '\n'){
        	reverse(vec_char.begin(), vec_char.end());
        	for (int j = 0; j < size(vec_char); j++)
        	{
        		cout << vec_char[j];
        	}
        	vec_char.clear();
        }
        in.seekg(-2,ios::cur);
    }
    in.close();
}
