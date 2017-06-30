#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double TAX_PER_100 = 0.0075;
  const double ACTUAL_VALUE = 0.60;

  double value;
  double assess;
  double tax;

  cout << "Please enter the actual value of a piece of property: ";
  cin >> value;

  assess = value * ACTUAL_VALUE;
  tax = TAX_PER_100 * assess;

  cout << "The assessment value of your propery is $" << setprecision(2)
       << fixed << assess << ", and the propery tax is $" << tax << endl;
}
