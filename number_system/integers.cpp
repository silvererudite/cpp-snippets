#include <iostream>

int main(){
  // braces initializaton
  int anime_count{}; // initializes to 0
  int movie_count {10}; // initialize to 10 
  int frac_int = 1.5;
  std::cout << "number1 " << anime_count << std::endl;
  std::cout << "number2 " << movie_count << std::endl;
  std::cout << "number3 " << frac_int << std::endl;

  // functional initialization
  int apple(6);
  int oranges(10);
  int pears(3.5);
  std::cout << "apples " << apple << std::endl;
  std::cout << "oranges " << oranges << std::endl;
  std::cout << "pears " << pears << std::endl;

  // assignment
  int banana = 4;
  return 0; 
}