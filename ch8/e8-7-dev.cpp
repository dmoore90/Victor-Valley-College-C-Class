#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
  string line, f;
  char c;
  int position;
  
  ifstream infile("input.txt");
  ofstream outfile("output.txt");
  
  getline(infile, f);
  infile.seekg(0, ios::end);
  
  int size = infile.tellg();

  while(true)
  {
    infile.seekg(-2, ios::cur);
    if (infile.tellg() < 0) 
    {
      break;
    }
    infile.get(c);
    if (c == '\n')
    {
      position = infile.tellg();
      getline(infile, line);
      outfile << line << endl;
      infile.seekg((size - (position - 1)) * -1, ios::end);
    }
  }
  outfile << f << endl;
  return 0;
}