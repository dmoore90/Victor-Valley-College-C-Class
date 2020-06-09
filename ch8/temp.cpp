#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
   for (int i = 0; i < argc; i = i + 2)
   {
      cout << "Argument " << i + 1 << ":" << argv[i] << endl;
   }
   return 0;
}

