#include <iostream>
using namespace std;

int main()
{
   double state_sales_tax = 0.04;
   double county_sales_tax = 0.02;
   int purchase = 95;

   double total_tax = purchase * (state_sales_tax + county_sales_tax);

   cout << total_tax;
   return 0;
}
