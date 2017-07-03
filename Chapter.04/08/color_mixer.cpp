#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
  const string RED = "red";
  const string BLUE = "blue";
  const string YELLOW = "yellow";
  const string PURPLE = "purple";
  const string ORANGE = "orange";
  const string GREEN = "green";

  string color1;
  string color2;

  cout << "Please enter a name of color from red, blue, or yellow with all "
       << "lower cases: ";
  cin >> color1;
  cout << "Please enter a name of a different color from red, blue, "
       << "or yellow with all lower cases: ";
  cin >> color2;

  if(color1 == RED){
    if(color2 == BLUE){
      cout << PURPLE << endl;
    } else if(color2 == YELLOW){
      cout << ORANGE << endl;
    } else {
      cout << "I asked you to enter a different color!";
    }
  } else if(color1 == BLUE){
    if(color2 == RED){
      cout << PURPLE << endl;
    } else if(color2 == YELLOW){
      cout << GREEN << endl;
    } else {
      cout << "I asked you to enter a different color!";
    }
  } else if(color1 == YELLOW){
      if(color2 == BLUE){
        cout << PURPLE << endl;
      } else if(color2 == RED){
        cout << ORANGE << endl;
      } else {
        cout << "I asked you to enter a different color!";
      }
  }
  return 0;
}
