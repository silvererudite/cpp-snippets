#include <iostream>

int addNumbers(int num1, int num2){
  return num1 + num2;
}

int main(){
  // int var1 = 2;
  // int var2 = 3;
  // std::cout << "Sum of nums: " << var1 + var2 << std::endl;

    int var1 {2};
    int var2 {7};
  std::cout << "Sum of nums: " << var1 + var2 << std::endl;
  std::cout << "Sum of nums using function: " << addNumbers(var1, var2)  << std::endl;

  return 0; //to identify if the program ran correctly or not
}