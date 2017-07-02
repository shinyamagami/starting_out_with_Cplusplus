#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
// how to use srand() and rand()
int main()
{
  const double PI = 3.14159;
  const double AREA  = 14.125;

  double angle;
  double sine;
  double cosine;
  double tangent;

  cout << "What is the angle in radians?: ";
  cin >> angle;
  sine = sin(angle);
  cosine = cos(angle);
  tangent = tan(angle);


  cout << setw(20) << left << "Sine:" << setw(10) << right
       << setprecision(4) << fixed << sine << endl
       << setw(20) << left << "Cosine:" << setw(10) << right
       << setprecision(4) << fixed << cosine << endl
       << setw(20) << left << "Tangent:" << setw(10) << right
       << setprecision(4) << fixed << tangent << endl;    
}
