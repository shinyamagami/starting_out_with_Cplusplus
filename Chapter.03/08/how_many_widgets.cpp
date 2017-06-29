#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double WIDGET = 12.5;

  double pallet;
  double total;
  double number;

  cout << "Please enter the weight of the pallet itself in pound: ";
  cin >> pallet;
  cout << "Please enter the weight of the pallet with widgets: ";
  cin >> total;

  number = (total - pallet) / WIDGET;

  cout << "You have " << setprecision(2) << fixed << number
       << " widgets on the pallet." << endl;
}
