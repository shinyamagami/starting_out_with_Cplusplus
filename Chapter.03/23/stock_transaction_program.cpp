#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double NUMBER = 1000;
  const double BUY_PRICE  = 45.50;
  const double COMMISSION_RATE = 0.02;
  const double SELL_PRICE = 56.90;

  double paid = NUMBER * BUY_PRICE;
  double buy_commission = NUMBER * BUY_PRICE * COMMISSION_RATE;
  double got = NUMBER * SELL_PRICE;
  double sell_commission = NUMBER * SELL_PRICE * COMMISSION_RATE;
  double earned = NUMBER * SELL_PRICE * (1 + COMMISSION_RATE) -
                  NUMBER * BUY_PRICE * (1 + COMMISSION_RATE);


  cout << setw(20) << left << "You paid for the stock:" << setw(10) << right
       << setprecision(2) << fixed << paid << endl
       << setw(20) << left << "You paid for the commision:" << setw(10) << right
       << setprecision(2) << fixed << buy_commission << endl
       << setw(20) << left << "The amount you got:" << setw(10) << right
       << setprecision(2) << fixed << got << endl
       << setw(20) << left << "You paid for the commision:" << setw(10) << right
       << setprecision(2) << fixed << sell_commission << endl
       << setw(20) << left << "The profit you made:" << setw(10) << right
       << setprecision(2) << fixed << earned << endl;
}
