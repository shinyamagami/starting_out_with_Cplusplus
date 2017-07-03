#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
  const double PRICE = 99;
  const double FIFTY = 0.5;
  const double SIXTY = 0.6;
  const double SEVENTY = 0.7;
  const double EIGHTY = 0.8;

  int quantity;
  double cost;

  cout << "Enter the number of units sold: " << endl;
  cin >> quantity;
  cost = quantity * PRICE;

  if(quantity >= 100){
    cout << "The cost is $" << cost * FIFTY << endl;
  } else if(quantity >= 50){
    cout << "The cost is $" << cost *SIXTY << endl;
  } else if(quantity >= 20){
    cout << "The cost is $" << cost * SEVENTY << endl;
  } else if(quantity >= 10){
    cout << "The cost is $" << cost * EIGHTY << endl;
  } else if(quantity <= 0){
    cout << "The quantity should be greater than 0." << endl;
  } else {
    cout << "The cost is $" << cost << endl;
  }
  return 0;
}
