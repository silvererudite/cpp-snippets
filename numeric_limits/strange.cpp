#include <iostream>

int main(){

  char var1 {40};
  char var2 {50};

  auto res = var1 + var2;
  std::cout << "SIze of var 1 " << sizeof(var1) << std::endl;
  std::cout << "SIze of var 2 " << sizeof(var2) << std::endl;
  
  std::cout << "SIze of res " << sizeof(res) << std::endl;
  return 0; 
}
