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

  string name;
  int age;
  string city;
  string college;
  string profession;
  string animal;
  string animals_name;

  cout << "What is your name?: ";
  getline(cin, name);
  cout << "How old are you?: ";
  cin >> age;
  cout << "Which city do you live in?: ";
  cin >> city;
  cin.ignore();
  cout << "Which college do you go?: ";
  getline(cin, college);
  cout << "What is your profession?: ";
  cin >> profession;
  cin.ignore();
  cout << "What animal did you adapt? Any animal is ok: ";
  getline(cin, animal);
  cout << "What is your pet's name?: ";
  cin >> animals_name;
  cout << "There once was a person named "<< name << " who lived in "
       << city << ". At the age of " << age << ", went to college at "
       << college << ". " << name << " graduated and went to work as a "
       << profession << ". Then, " << name << " adopted a(n) " << animal
       << " named " << animals_name << ". They both lived happily ever after! "
       << endl;
}
