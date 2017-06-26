#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const int CLASS_A = 15;
  const int CLASS_B = 12;
  const int CLASS_C = 9;

  int class_a_sold;
  int class_b_sold;
  int class_c_sold;
  double sales;

  cout << "How many Class A seats were sold?" << endl;
  cin >> class_a_sold;
  cout << "How many Class B seats were sold?" << endl;
  cin >> class_b_sold;
  cout << "How many Class C seats were sold?" << endl;
  cin >> class_c_sold;
  sales = class_a_sold * CLASS_A + class_b_sold * CLASS_B
          + class_c_sold * CLASS_C;
  cout << setprecision(2) << fixed << showpoint << sales << endl;
}
