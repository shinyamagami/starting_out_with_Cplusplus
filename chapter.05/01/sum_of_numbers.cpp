#include <iostream>
using namespace std;

int main()
{
  int a = -1;  
  int b = 1;
  int sum = 0;

  while(a < 0){
    cout << "Please enter a positive integer: ";
    cin >> a;
  }

  while(b <= a){
    sum += b++;
  } 
  
  cout << sum;  

  return 0;
}
