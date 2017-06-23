#include <iostream>
using namespace std;

int main()
{
  const double ONE_ACRE = 43560;
  const double LAND = 391876;

  double land_in_acres = LAND / ONE_ACRE;

  cout << "The number of acres in a tract of land is " << land_in_acres
       << " acres."<< endl;

  return 0;
}
