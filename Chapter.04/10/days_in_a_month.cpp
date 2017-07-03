#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
  const int FOUR_HUNDRED = 400;
  const int ONE_HUNDRED = 100;
  const int FOUR = 4;

  int month;
  int year;

  cout << "Enter a month (1-12): ";
  cin >> month;
  cout << "Enter a year: ";
  cin >> year;

  if(year % ONE_HUNDRED == 0){
    if(year % FOUR_HUNDRED == 0){
      if(month == 2){
        cout << "29 days" << endl;
      } else if(month == 4 || month == 6 || month == 9 || month == 1){
        cout << "30 days" << endl;
      } else {
        cout << "31 days" << endl;
      }
    } else {
      if(month == 2){
        cout << "28 days" << endl;
      } else if(month == 4 || month == 6 || month == 9 || month == 1){
        cout << "30 days" << endl;
      } else {
        cout << "31 days" << endl;
      }
    }
  } else {
    if(year % FOUR == 0){
      if(month == 2){
        cout << "29 days" << endl;
      } else if(month == 4 || month == 6 || month == 9 || month == 1){
        cout << "30 days" << endl;
      } else {
        cout << "31 days" << endl;
      }
    } else {
      if(month == 2){
        cout << "28 days" << endl;
      } else if(month == 4 || month == 6 || month == 9 || month == 1){
        cout << "30 days" << endl;
      } else {
        cout << "31 days" << endl;
      }
    }
  }

  return 0;
}
