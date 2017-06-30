#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double MULTIPLICATION = 9.0 / 5;
  const double ADDITION = 32;

  double celsius;
  double fahrenheit;

  cout << "Please enter a degree in Celsius: ";
  cin >> celsius;

  fahrenheit = celsius * MULTIPLICATION + ADDITION;

  cout << "The degree in Celsius you enter is "<< setprecision(2) << fixed
       << fahrenheit << " in Fahrenheit" << endl;
}
