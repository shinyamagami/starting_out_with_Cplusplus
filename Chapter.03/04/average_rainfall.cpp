#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const int MONTHS = 3;

  string month1;
  string month2;
  string month3;
  double rainfall1;
  double rainfall2;
  double rainfall3;
  double average;

  cout << "Please enter a name of month: " << endl;
  cin >> month1;
  cout << "Please enter the amount of rainfall in the month: " << endl;
  cin >> rainfall1;
  cout << "Please enter a name of month: " << endl;
  cin >> month2;
  cout << "Please enter the amount of rainfall in the month: " << endl;
  cin >> rainfall2;
  cout << "Please enter a name of month: " << endl;
  cin >> month3;
  cout << "Please enter the amount of rainfall in the month: " << endl;
  cin >> rainfall3;
  average = (rainfall1 + rainfall2 + rainfall3) / MONTHS;
  cout << "The average rainfall for " << month1 << ", " << month2 << ", and " <<
  month3 << " is " << setprecision(2) << fixed << average << " inches." << endl;
}
