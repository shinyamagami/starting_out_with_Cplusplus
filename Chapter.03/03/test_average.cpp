#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const double TESTS = 5;

  int testA;
  int testB;
  int testC;
  int testD;
  int testE;
  double average;

  cout << "What is your score for test A?" << endl;
  cin >> testA;
  cout << "What is your score for test B?" << endl;
  cin >> testB;
  cout << "What is your score for test C?" << endl;
  cin >> testC;
  cout << "What is your score for test D?" << endl;
  cin >> testD;
  cout << "What is your score for test E?" << endl;
  cin >> testE;
  average = (testA + testB + testC + testD + testE) / TESTS;
  cout << setprecision(2) << fixed << showpoint << average << endl;
}
