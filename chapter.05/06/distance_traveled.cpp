#include <iostream>
#include <string>


using namespace std;

int main()
{
  const string LINE = "-";  
  const string ASK_SPEED = "What is the speed of the vehicle in mph? ";
  const string ASK_HOURS = "How many hours has it traveled? ";
  
  int speed = -1;
  int hours = 0;
  

  while(speed < 0){
    cout << ASK_SPEED << endl;
    cin >> speed;
  }
  while(hours < 1){
    cout << ASK_HOURS << endl;
    cin >> hours;
  }
  cout << "Hour\tDistance Traveled" << endl;
  for(int i = 0; i <= 20; i++){
    cout << LINE;
  }
  cout << endl;
  for(int j = 1; j <= hours; j++){
    cout << j << "\t" << j * speed << endl;
  }
}
