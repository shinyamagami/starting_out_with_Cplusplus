#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  const string ASK_DAY = "How many days do you want to work? ";
  const int penny = 1;
  const string LINE = "-";

  int day = 0;
  int sum = 1;

  do{
    cout << ASK_DAY << endl;
    cin >> day;
  }while(day < 1);

  cout << "Day\tPay" << endl;
  for(int i = 1; i <= day; i++){
    sum = pow(2 , i - 1);
    cout << i << "\t" << sum << endl;
  }

  return 0;
}
