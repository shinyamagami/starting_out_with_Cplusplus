#include <iostream>
#include <string>
using namespace std;

int main()
{
  char letter;
  int i = 0;
  int j;
  
  while(i < 128){
    for(j = 0; j < 6; j++){
      letter = i;
      i++;
      cout << letter;
    }
    cout << "\n";
  }

  return 0;
}
