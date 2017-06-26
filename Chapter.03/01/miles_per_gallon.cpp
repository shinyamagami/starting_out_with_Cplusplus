#include <iostream>
#include <string>
using namespace std;

int main()
{
  double gallons;
  double distance;
  double miles;

  cout << "How many gallons of gas can your car hold?" << endl;
  cin >> gallons;
  cout << "How many miles can it be riven on a full tank?" << endl;
  cin >> distance;
  miles = distance / gallons;

  cout << "Your car may be driven " << miles << " miles per gallon of gas."
       << endl;

}
