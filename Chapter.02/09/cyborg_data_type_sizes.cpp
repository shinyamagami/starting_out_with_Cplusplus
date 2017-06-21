#include <iostream>
using namespace std;

int main()
{
    const double ITEM1 = 15.95,
    ITEM2 = 24.95,
    ITEM3 = 6.95,
    ITEM4 = 12.95,
    ITEM5 = 3.95,
    SALES_TAX = 0.07;
    
    double sub_total = ITEM1 + ITEM2 + ITEM3 + ITEM4 + ITEM5;
    double tax = sub_total * SALES_TAX;
    double total = sub_total + tax;
    
    cout << ITEM1 << endl << ITEM2 << endl << ITEM3 << endl << ITEM4 << endl
    << ITEM5 << endl
    << sub_total << endl << tax << endl << total << endl;
    
    return 0;
}
