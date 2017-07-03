#include <iostream>
#include <cmath>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double constant = 9.8;
  const double light = 10;
  const double heavy = 1000;

  double mass;
  double weight;

  cout << "Please enter a mass: ";
  cin >> mass;

  weight = mass * 9.8;

  if(weight > heavy){
    cout << "Too heavy." << endl;
  } else if(weight < light){
    cout << "Too light." << endl;
  } else {
    cout << "In the middle." << endl;
  }

  return 0;
}
