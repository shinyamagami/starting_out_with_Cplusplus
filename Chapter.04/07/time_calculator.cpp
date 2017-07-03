#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  const double minute = 60;
  const double hour = 3600;
  const double day = 86400;

  double seconds;

  cout << "Please enter a number of seconds: ";
  cin >> seconds;


  if(seconds >= day){
    cout << setprecision(0) << seconds / day  << " day(s)"<< endl;
  } else if(seconds >= hour && seconds < day){
    cout << setprecision(0) << seconds / hour  << " hour(s)" << endl;
  } else {
    cout << setprecision(0) << seconds / minute  << " minuts(s)" << endl;
  }

  return 0;
}
