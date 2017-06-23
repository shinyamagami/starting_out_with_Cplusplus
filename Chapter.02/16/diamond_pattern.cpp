#include <iostream>
#include <string>
using namespace std;

int main()
{
  string star = "*";


  cout << "   " + star << endl << "  " + star + star + star << endl
       << " " + star + star + star + star + star + " " << endl
       << star + star + star + star + star + star + star << endl
       << " " + star + star + star + star + star + " " << endl
       << "  " + star + star + star << endl << "   " + star << endl;

  return 0;
}
