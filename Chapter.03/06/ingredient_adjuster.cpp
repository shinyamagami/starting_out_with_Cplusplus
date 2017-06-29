#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double presumed = 48;
  const double PRESUGAR = 1.5;
  const double PREBUTTER = 1;
  const double PREFLOUR = 2.75;

  double cookies;
  double sugar;
  double butter;
  double flour;

  cout << "Please enter the number of cookies you want to bake. Please don't "
       << "forget to count me in: " << endl;
  cin >> cookies;

  sugar = (cookies / presumed) * PRESUGAR;
  butter = (cookies / presumed) * PREBUTTER;
  flour = (cookies / presumed) * PREFLOUR;

  cout << "For the amount of cookies, you need " << setprecision(2) << fixed
  << sugar << "cups of sugar, " << butter << "cups of butter, and " << flour
  << " cups of flour."  << endl;
}
