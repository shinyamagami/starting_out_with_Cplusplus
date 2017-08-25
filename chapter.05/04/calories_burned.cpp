#include <iostream>

using namespace std;

int main()
{
  const double CALORIES = 3.6;
  
  double burned;
  int minute = 0;

  while(minute <= 25){
    minute += 5;
    burned = CALORIES * minute;
    
    cout << minute << "\t" << burned << endl;
  }
  
  return 0;
}
