#include <iostream>

using namespace std;

int main()
{
  double INITIAL_FEE = 2500;
  double RATE = 1.04;

  int year = 1;
  double fee;
  fee = INITIAL_FEE *  RATE;

  while(year < 7){
    cout << year << "\t" << fee << endl;
    fee *= RATE;
    year++;
  }

  return 0;
}
