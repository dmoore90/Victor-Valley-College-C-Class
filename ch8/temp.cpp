#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string line;
  char c;
  
  ifstream inFile("input.txt");
  ofstream outFile("output.txt");

  int position;
  string f;
  
  getline(inFile, f);
  inFile.seekg(0, ios::end);
  
  int size = inFile.tellg();

  while(true)
  {
    inFile.seekg(-2, ios::cur);
    if (inFile.tellg() < 0) 
    {
      break;
    }
    inFile.get(c);
    if (c == '\n')
    {
      position = inFile.tellg();
      getline(inFile, line);
      outFile << line << endl;
      inFile.seekg((size - (position - 1)) * -1, ios::end);
    }
  }
  outFile << f << endl;
  return 0;
}
