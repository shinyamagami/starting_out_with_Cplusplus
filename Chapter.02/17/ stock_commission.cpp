#include <iostream>
#include <string>
using namespace std;

int main()
{
  const double COMMISSION_RATE = 0.02;
  const int SHARES = 750;
  const double PRICE = 35;

  double paid = SHARES * PRICE;
  double commission = paid * COMMISSION_RATE;
  double total_paid = paid + commission;


  cout << "For the stock, Kathryn paid $" << paid << endl
       << "For commission, she paid $" << commission << endl
       << "For the total amount, she paid $" << total_paid << endl;

  return 0;
}
