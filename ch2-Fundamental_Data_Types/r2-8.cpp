// #include expects "FILENAME" or FILENAME>
// #include iostream

// semicolon after main() not valid
// int main();
// {
//    missing terminating ; character
//    cout << "Please enter two numbers:"
//    cin require ">>" not "<<"
//    cin << x, y;

//    missing terminating " character
//    cout << "The sum of << x << "and" << y
//       missing <<
//       << "is: " x + y << endl;

//    missing value for return statement
//    return;
// }

#include <iostream>
using namespace std;

int x, y;
  
int main()
{
   cout << "Please enter two numbers: \n";
   cin >> x >> y;
   cout << "The sum of " << x << " and " << y
      << " is: " << x + y << endl;
   return 0;
}