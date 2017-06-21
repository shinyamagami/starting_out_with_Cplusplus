#include <iostream>
using namespace std;

int main()
{
   const double TAX_RATE = 0.0675;
   const double TIP_RATE = 0.2;
   double purchase = 88.67;

   double tax = purchase * (1 + tax_rate);
   double tip = (purchase * (1 + tax_rate)) * tip_rate;
   double total = purchase * (1 + tax_rate) + tip;


   cout << "The meal cost: " << purchase << endl;
   cout << "The tax amount: " << tax << endl;
   cout << "The tip: " << tip << endl;
   cout << "Total: " << total << endl;

   return 0;
}
