#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string ASK_FLOORS = "How many floors the hotel has?";
  const string ASK_ROOMS = "How many rooms the floor has?";
  const string ASK_OCCUPIED = "How many rooms are occupied?";
  int floors = 0;
  int rooms;
  int total_rooms = 0;
  int occupied;
  int total_occupied = 0;  
  do{
    cout << ASK_FLOORS << endl;
    cin >> floors;
  } while(floors < 1);
  
  for(int i = 1; i <=floors; i++){
    cout << "This floor is " << i << endl;
    cout << ASK_ROOMS << endl;
    cin >> rooms;
    total_rooms += rooms;
    rooms = 0;
    cout << ASK_OCCUPIED << endl;
    cin >> occupied;
    total_occupied += occupied;
    occupied = 0;
  }
  cout << "The number of rooms the hotel has is " << total_rooms << endl;
  cout << "The number of occupid rooms is " << total_occupied << endl;
  cout << "The number of unoccupied room is " << total_rooms - total_occupied << endl;
  cout << "The percentage of occupied rooms is " << (double)total_occupied/ (double)total_rooms * 100 << "%" << endl;

  return 0;
}
