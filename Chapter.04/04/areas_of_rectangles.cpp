#include <iostream>
using namespace std;
// how to use srand() and rand()
int main()
{
  double length1;
  double width1;
  double length2;
  double width2;
  double area1;
  double area2;

  cout << "Please enter a length for rectangle 1: ";
  cin >> length1;
  cout << "Please enter a width for rectangle 1: ";
  cin >> width1;
  cout << "Please enter a length for rectangle 2: ";
  cin >> length2;
  cout << "Please enter a width for rectangle 2: ";
  cin >> width2;

  area1 = length1 * width1;
  area2 = length2 * width2;

  if(area1 > area2){
    cout << "Rectangel 1 has the greater area than rectangle 2." << endl;
  } else if(area1 < area2){
    cout << "Rectangel 2 has the greater area than rectangle 1." << endl;
  } else {
    cout << "They have the same area." << endl;
  }

  return 0;
}
