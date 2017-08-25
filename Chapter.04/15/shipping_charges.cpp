#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
  const double TWENTY = 0.1;
  const double THIRTYNINE = 0.08;
  const double FIFTYNINE = 0.06;
  const double SIXTY = 0.04;
  const int service = 10;
  double balance;
  int checks;

  cout << "Enter the beginning balance of your bank account: " << endl;
  cin >> balance;
  if(balance < 0){
    cout << "The account is overdrawn." << endl;
  }
  cout << "Enter the number of checks written: " << endl;
  cin >> checks;
  if(checks < 0){
    cout << "The number of checks written should be 0 or a positive number."
         << endl;
  } else {
    if(checks >= 60){
      cout << "The service fee is $" << service + checks * SIXTY << endl;
    } else if(checks >= 40){
      cout << "The service fee is $" << service + checks * FIFTYNINE << endl;
    } else if(checks >= 20){
      cout << "The service fee is $" << service + checks * THIRTYNINE << endl;
    } else if(checks < 20){
      cout << "The service fee is $" << service + checks * TWENTY << endl;
    } else {
    }
  }
  return 0;
}
