#include <iostream>
#include <cmath>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double over = 25;
  const double under = 18.5;
  double height;
  double weight;
  double bmi;

  cout << "Please enter your height in inches: ";
  cin >> height;
  cout << "Please enter your weight in pounds: ";
  cin >> weight;

  bmi = weight * 703 / pow(height, 2);

  if(bmi > over){
    cout << "You are overweight, just exercise." << endl;
  } else if(bmi < under){
    cout << "You are underweight, just exercise." << endl;
  } else {
    cout << "It doesn't matter what BMI say, just exercise." << endl;
  }

  return 0;
}
