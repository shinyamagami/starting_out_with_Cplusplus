#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  const int DENOMINATOR = 2;

  double female;
  double male;
  double trans;
  double rfemale;
  double rmale;
  double rtrans;

  cout << "Please enter the number of female students: " << endl;
  cin >> female;
  cout << "Please enter the number of male students: " << endl;
  cin >> male;
  cout << "Please enter the number of trans students: " << endl;
  cin >> trans;
  rfemale = female * 100 / (female + male + trans);
  rmale = male * 100 / (female + male + trans);
  rtrans = trans * 100 / (female + male + trans);

  cout << "The each ratio of sexes in your class are " << setprecision(2)
  << fixed <<  rfemale << "%, " << rmale << "%, and " << rtrans << "%." << endl;
}
