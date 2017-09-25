#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
  string title;
  string director;
  int year_released;
  int running_time;
  double cost;
  double revenue;
};

void show(MovieData);

int main()
{
  MovieData movie1 = {"Who are you", "John Abc", 1976, 94, 30, 450};
  MovieData movie2 = {"I'm here", "Sarah Def", 1984, 101, 25, 80};

  show(movie1);
  show(movie2);

  return 0;
}

void show(MovieData movie){
  cout << "The title is " << movie.title
       << " directed by " << movie.director << " , released in "
       << movie.year_released << ". The running time is "
       << movie.running_time << " minutes." << "The first year profit is " 
       << movie1.cost - movie1.revenue << endl;

}
