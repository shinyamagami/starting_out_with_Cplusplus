#include <iostream>
using namespace std;

int main()
{
  const double RISING_LEVEL = 1.5;

  double level5 = RISING_LEVEL * 5;
  double level7 = RISING_LEVEL * 7;
  double level10 = RISING_LEVEL * 10;


  cout << "The number of millimeters higher than the current level in 5 years: "
       << level5 << endl
       << "The number of millimeters higher than the current level in 7 years: "
       << level7 << endl
       << "The number of millimeters higher than the current level in 10 years: "
       << level10 << endl;
}
