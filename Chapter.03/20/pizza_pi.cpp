#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double PI = 3.14159;

  cout << "What is the amount of your loan?: ";
  cin >> loan;
  cout << "What is the monthly interest rate?: ";
  cin >> interest_rate;
  cout << "What is the number of payments: ";
  cin >> number;

  monthly_payment = ((interest_rate / 100) * pow(1 + interest_rate / 100, number) * loan)
            / (pow(1 + interest_rate / 100, number) - 1);
  payment = monthly_payment * number;
  interest_paid = payment - loan;

  cout << setw(20) << left << "Loan Amount:" << setw(5) << right << "$"
       << setw(10) << right << setprecision(2) << fixed << loan << endl
       << setw(20) << left << "Monthly Interest Rate:" << setw(12) << right
       << setprecision(0) << interest_rate << "%" << endl
       << setw(20) << left << "Number of Payments:" << setw(15) << right
       << right << number << endl
       << setw(20) << left << "Monthly Payment:" << setw(5) << right << "$"
       << setw(10) << right << setprecision(2) << fixed << monthly_payment << endl
       << setw(20) << left << "Amount Paid Back:" << setw(5) << right << "$"
       << setw(10) << right << payment << endl
       << setw(20) << left << "Interest Paid:" << setw(5) << right << "$"
       << setw(10) << right << interest_paid << endl;
}
