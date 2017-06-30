#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double YEN_PER_DOLLAR = 110.00;
  const double EUROS_PER_DOLLAR = 0.90;

  double dollar;
  double yen;
  double euro;

  cout << "Please enter a mount of dollar in your wallet: ";
  cin >> dollar;

  yen = dollar * YEN_PER_DOLLAR;
  euro = dollar * EUROS_PER_DOLLAR;

  cout << setprecision(2) << fixed << yen << " in Yen, " << euro << " in Euro"
       << endl;
}
