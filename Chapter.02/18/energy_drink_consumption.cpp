#include <iostream>
#include <string>
using namespace std;

int main()
{
  const int CUSTOMERS = 16500;
  const double RATE_OF_CUSTOMERS_WHO_BUY_ONE_OR_MORE_PER_WEEK = 0.15;
  const double RATE_OF_CUSTOMERS_OF_THEM_WHO_LIKE_CTRUS = 0.58;

  double customers = 16500 * RATE_OF_CUSTOMERS_WHO_BUY_ONE_OR_MORE_PER_WEEK;
  double customers_for_citrus = customers * RATE_OF_CUSTOMERS_OF_THEM_WHO_LIKE_CTRUS;


  cout << "The approximate number of customers in the survey who purchase" <<
          "one or more energy drinks per week is " << customers << endl
       << "The approximate number of customers in the survey who prefer" <<
          "citrus-flavored energy drinks is " << customers_for_citrus << endl;

  return 0;
}
