#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double DENOMINATOR = 1.06;
  const double STATE_SALES_TAX = 2.0 / 3.0;
  const double COUNTY_SALES_TAX = 1.0 / 3.0;
  const string LINE = "-----------------";
  string month;
  string year;
  double total;
  double sales;
  double state_tax;
  double county_tax;

  cout << "Please enter a name of a month: ";
  cin >> month;
  cout << "Please enter a name of a year: ";
  cin >> year;
  cout << "Please enter the total amount of money in the cash register: ";
  cin >> total;

  sales = total / DENOMINATOR;
  state_tax = (total - sales) * STATE_SALES_TAX;
  county_tax = (total - sales) * COUNTY_SALES_TAX;

  cout << "Month: " << month << ", " << year << endl << LINE << endl
       << setw(20) << left << "Total Collected:" << setw(5) << right << "$ "
       << setw(10) << right << setprecision(2) << fixed << total << endl
       << setw(20) << left << "Sales:" << setw(5) << right << "$ "
       << setw(10) << right << sales << endl
       << setw(20) << left << "County Sales Tax:" << setw(5) << right
       << "$ " << setw(10) << right << county_tax << endl
       << setw(20) << left << "State Sales Tax:" << setw(5) << right
       << "$ " << setw(10) << right << state_tax << endl
       << setw(20) << left << "Total Sales Tax:" << setw(5) << right
       << "$ " << setw(10) << right << county_tax + state_tax << endl   ;    
       ;
}
