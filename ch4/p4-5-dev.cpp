#include <iostream>

using namespace std;

int main()
{
  int num, i, z, x = 0, counter=0;  

  cout << "Enter number to view list of primes it contains: \n";  
  cin >> num;  

  for (i = 2; i <= num; i++)
  {
    x = i / 2;
    for (z = 2; z <= x; z++)  
    {   
      if (i % z == 0)  
      {    
        counter = 1;   
      }  
    }  
    if (counter==0)
    {
      cout << i << endl;
    }  
    counter = 0;
  }
}