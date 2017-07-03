#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
  const int ONE = 5;
  const int TWO = 15;
  const int THREE = 30;
  const int FOUR = 60;

  int quantity;

  cout << "Enter the number of books you bought in this month: " << endl;
  cin >> quantity;

  if(quantity >= 4){
    cout << FOUR << " points is given for purchasing 4 or more books." << endl;
  } else if(quantity == 3){
    cout << THREE << " points is given for purchasing 3 books." << endl;
  } else if(quantity == 2){
    cout << TWO << " points is given for purchasing 2 books." << endl;
  } else if(quantity == 1){
    cout << ONE << " points is given for purchasing 1 books." << endl;
  } else {
    cout << "0 points is given for purchasing no books." << endl;
  }
  return 0;
}
