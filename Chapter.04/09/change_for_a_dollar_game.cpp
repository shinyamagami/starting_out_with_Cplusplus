#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  const int PENNY = 1;
  const int NICKEL = 5;
  const int DIME = 10;
  const int QUARTER = 25;
  const int ONE = 100;

  int pennies;
  int nickels;
  int dimes;
  int quarters;
  int sum;

  cout << "Please enter a number of pennies: ";
  cin >> pennies;
  cout << "Please enter a number of nickels: ";
  cin >> nickels;
  cout << "Please enter a number of dimes: ";
  cin >> dimes;
  cout << "Please enter a number of quarters: ";
  cin >> quarters;

  sum = pennies * PENNY + nickels * NICKEL + dimes * DIME + quarters * QUARTER;

  if(sum == ONE){
    cout << "Congrats! The total is equal to $1!" << endl;
  } else {
    cout << "Not equal to $1!" << endl;
  }

  return 0;
}
