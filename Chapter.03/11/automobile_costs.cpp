#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double MONTHS = 12;

  double loan;
  double insurance;
  double gas;
  double oil;
  double tires;
  double maintenance;
  double cost;
  double total;

  cout << "Please enter a monthly cost of loan payment for your car: ";
  cin >> loan;
  cout << "Please enter a monthly cost of insurance for your car: ";
  cin >> insurance;
  cout << "Please enter a monthly cost of gas for your car: ";
  cin >> gas;
  cout << "Please enter a monthly cost of oil for your car: ";
  cin >> oil;
  cout << "Please enter a monthly cost of tires for your car: ";
  cin >> tires;
  cout << "Please enter a monthly cost of maintenance for your car: ";
  cin >> maintenance;

  cost = loan + insurance + gas + oil + tires + maintenance;
  total = cost * MONTHS;

  cout << "$" << setprecision(2) << fixed << cost << " for every month, and $"
       << total << " for the annual cost." << endl;
}
