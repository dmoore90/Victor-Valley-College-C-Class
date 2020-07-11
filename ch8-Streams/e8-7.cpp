#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
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
        if (ch != '\n')
        {
            line += ch;
        }
        else if (ch == '\n'){
            int size = line.length() - 1;
            for (int i = size; i >= 0; i --)
            {
                nline += line[i];
            }
            out << nline << endl;

            nline = "";
            line = "";
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
