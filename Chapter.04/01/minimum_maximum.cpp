#include <iostream>
using namespace std;
// how to use srand() and rand()
int main()
{
  double a;
  double b;

  cout << "Please enter a number for a: ";
  cin >> a;
  cout << "Please enter another number for b: ";
  cin >> b;

  if(a < b)
    cout << "b is larger.";
  else if(a > b)
    cout << "a is larger.";
  else
    cout << "Both of them are equal.";


  return 0;
}
