#include <iostream>

using namespace std;

int main()
{
  double rising = 1.5;
  double level;
  int year = 1;
  while(year < 26){
    cout << year << "\t" << rising * year << endl;
    year++;
  }

  return 0;
}
