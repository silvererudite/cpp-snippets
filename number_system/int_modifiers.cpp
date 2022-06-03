#include <iostream>

int main(){
  signed int number1 = 15;
  signed int number2 = -15; 
  long int num4 = 4.55;
  unsigned int num3 = 12; // stores only positive numbers
  
  std::cout << "number1 " << number1<< std::endl;
  std::cout << "number2 " << number2<< std::endl;
  std::cout << "number3 " << num3<< std::endl;
  std::cout << "number4 " << num4<< std::endl;

  std::cout << "number1 size " << sizeof(number1) << std::endl;
  std::cout << "number2 size " << sizeof(number2) << std::endl;
  std::cout << "number3 size" << sizeof(num3)<< std::endl;
  std::cout << "number4 size" << sizeof(num4)<< std::endl;
  return 0; 
}