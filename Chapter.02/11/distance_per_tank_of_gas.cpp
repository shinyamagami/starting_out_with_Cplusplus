#include <iostream>
using namespace std;

int main()
{
  const int GAS_TANK = 20;
  const double MPG_TOWN = 23.5;
  const double MPG_HIGHWAY = 28.9;

  double distance_town = GAS_TANK * MPG_TOWN;
  double distance_highway = GAS_TANK * MPG_HIGHWAY;

  cout << "The distance the car can travel in town is " << distance_town
       << "km." << endl;
  cout << "The distance the car can travel on the highway is " << distance_highway
       << "km." << endl;

  return 0;
}
