#include <iostream>
using namespace std;
// how to use srand() and rand()
int main()
{
  int i;

  cout << "Please enter an integer within 1 through 10: ";
  cin >> i;

  switch(i){
    case 1:
      cout << "I" << endl;
      break;
    case 2:
      cout << "II" << endl;
      break;
    case 3:
      cout << "III" << endl;
      break;
    case 4:
      cout << "IV" << endl;
      break;
    case 5:
      cout << "V" << endl;
      break;
    case 6:
      cout << "VI" << endl;
      break;
    case 7:
      cout << "VII" << endl;
      break;
    case 8:
      cout << "VIII" << endl;
      break;
    case 9:
      cout << "IX" << endl;
      break;
    case 10:
      cout << "X" << endl;
      break;
    default:
      cout << "ERROR!! You may entered an invalid number!" << endl;

  }

  return 0;
}
