#include <iostream>
#include <iomanip>

int main(){
  float number1 = 15.9876f;
  double number2 = -15.9876543225; 
  long double num3 = 4.55876543864332L;
  
  std::cout << std::setprecision(20);
  std::cout << "number1 " << number1<< std::endl;
  std::cout << "number2 " << number2<< std::endl;
  std::cout << "number3 " << num3<< std::endl;
  // std::cout << "number4 " << num4<< std::endl;

  std::cout << "number1 size " << sizeof(number1) << std::endl;
  std::cout << "number2 size " << sizeof(number2) << std::endl;
  std::cout << "number3 size " << sizeof(num3)<< std::endl;
  // std::cout << "number4 size" << sizeof(num4)<< std::endl;
  return 0; 
}