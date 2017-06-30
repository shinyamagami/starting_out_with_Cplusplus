#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double TAX_PER_100 = 0.0264;
  const double ACTUAL_VALUE = 0.60;
  const double EXEMPTION = 5000;

  double tax_rate;
  double value;
  double assess;
  double tax;

  cout << "Please enter the actual value of a piece of property: ";
  cin >> value;
  cout << "Please enter the tax rate for each $100 of assessed value: ";
  cin >> tax_rate;
  tax_rate /= 100;

  assess = value * ACTUAL_VALUE - EXEMPTION;
  tax = assess * tax_rate;

  cout << "The assessment value of your propery is $" << setprecision(2)
       << fixed << assess << endl << ", and the propery tax is $" << tax << endl
       << ", and the quarterly tax bill will be $" << tax / 4 << endl;
}
