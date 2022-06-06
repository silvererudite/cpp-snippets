#include <iostream>

int main(){
  char character1 {'a'};
  char character2 {'b'};
  char character3 {'c'};

  std::cout << "character 1 " << character1 << std::endl;
  std::cout << "character size " << sizeof(char) << std::endl;

  char val = 65;
  std::cout << "character 4 " << val << std::endl;
  std::cout << "character as int " << static_cast<int>(val) << std::endl;
  return 0; 
}
