#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double INSURANCE = 0.8;

  double price;
  double cost;

  cout << "Please enter the price for rebuilding your house: ";
  cin >> price;

  cost = price * INSURANCE;

  cout << "$" << setprecision(2) << fixed << cost
       << endl;
}
