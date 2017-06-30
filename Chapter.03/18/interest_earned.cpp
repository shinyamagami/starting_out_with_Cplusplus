#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  double principal;
  double interest_rate;
  int compound;
  double amount;
  double interest;

  cout << "What is the principal?: ";
  cin >> principal;
  cout << "What is the interest rate?: ";
  cin >> interest_rate;
  cout << "What is the compound?: ";
  cin >> compound;

  amount = principal * pow((1 + (interest_rate / 100) / compound), compound);
  interest = amount - principal;

  cout << setw(20) << left << "Interest Rate:" << setw(15) << right
       << interest_rate << "%" << endl
       << setw(20) << left << "Times Compounded:" << setw(15) << right
       << compound << endl
       << setw(20) << left << "Principal:" << setw(5) << right << "$"
       << setw(10) << right << setprecision(2) << fixed << principal << endl
       << setw(20) << left << "Interest:" << setw(5) << right << "$"
       << setw(10) << right << setprecision(2) << fixed << interest << endl
       << setw(20) << left << "Amount in Savings:" << setw(5) << right << "$"
       << setw(10) << right << setprecision(2) << fixed << amount << endl;
}
