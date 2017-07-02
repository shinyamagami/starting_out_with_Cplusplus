#include <iostream>
using namespace std;
// how to use srand() and rand()
int main()
{
  int month;
  int day;
  int year;

  cout << "Please enter a month in numeric form: ";
  cin >> month;
  cout << "Please enter a day in numeric form: ";
  cin >> day;
  cout << "Please enter a two-digit year: ";
  cin >> year;

  month * day == year ? cout << "The date is magic." :
  cout << "The date is not magic." << endl;

  return 0;
}
