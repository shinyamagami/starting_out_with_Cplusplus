#include <iostream>
using namespace std;

int main()
{
  const double PROFIT_RATE = 0.35;
  const double CIRCUIT_BOARD = 14.95;

  double price_of_board = CIRCUIT_BOARD / (1 - PROFIT_RATE);

  cout << "The selling price of a circuit board is $" << price_of_board
       << endl;

  return 0;
}
