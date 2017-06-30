#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  const int MIN_VALUE = 1;
  const int MAX_VALUE = 999;
  const string LINE = "----";

  unsigned seed;
  srand(seed);

  int a = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
  int b = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
  int sum = a + b;
  string c;
  cout << setw(4) << right << a << endl
       << "+" << setw(3) << b << endl
       << LINE << endl;
  cin >> c;
  cout << setw(4) << right << a << endl
       << "+" << setw(3) << b << endl
       << LINE << endl
       << setw(4) << right << sum << endl;

}
