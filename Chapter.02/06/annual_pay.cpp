#include <iostream>
using namespace std;

int main()
{
  double payAmount = 2200,
        payPeriods = 26,
        annualPay = payAmount * payPeriods;

  cout << "The total annual pay is : $" << annualPay << endl;

  return 0;
}
