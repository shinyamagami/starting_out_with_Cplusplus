#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double ADULT = 10;
  const double CHILD = 6;

  string movie;
  int adults;
  int children;
  double gross;
  double net;
  double dist;

  cout << "Please enter the title of a movie:  " << endl;
  getline(cin, movie);
  cout << "Please enter the number of adult tickets you sold:  " << endl;
  cin >> adults;
  cout << "Please enter the number of child tickets you sold:  " << endl;
  cin >> children;
  gross = adults * ADULT + children * CHILD;
  net = gross * 0.2;
  dist = gross - net;
  // did not understande how to align properly
  cout << "Movie Name:" << setw(15) << "\"" << movie << "\"" << endl
  << "Adult Tickets Sold:" << setw(15) << right << adults << endl
  << "Child Tickets Sold:" << setw(15) << children << endl
  << "Gross Box Office Profit:" << setw(6) << setprecision(2) << fixed
  << "$ " << gross << endl
  << "Net Box Office Profit:" << setw(9) << "$ " << net << endl
  << "Amount Paid to Distributor:" << setw(3) << "$ " << dist << endl;
}
