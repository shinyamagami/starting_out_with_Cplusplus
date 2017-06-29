#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double PRESUMED = 10;
  const double PRECALORIES = 300;

  double cookies;
  double calories;

  cout << "Please enter the number of cookies you ate: ";
  cin >> cookies;

  calories = cookies * PRECALORIES / PRESUMED;

  cout << setprecision(2) << fixed << calories << " calories were consumed."
       << endl;
}
