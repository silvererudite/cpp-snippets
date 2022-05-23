#include <iostream>
#include <string>

int main(){
  
  std::cout << "Sum of nums: " << 1 + 2 << std::endl;
  std::cerr << "Error: Something is wrong" << std::endl;

  int age;
  std:: string name;
  std:: string full_name;
  std::cout << "please type name and age: " <<std::endl;

  // std::cin >> name;
  // std::cin >> age;

  //std::cin >> name >> age;

  //io with spaces
  std::getline(std::cin, full_name);
  std::cin >> age;

  //std::cout << "Hi "<<age<<" years old "<<name <<std::endl;
  std::cout << "Hi "<<age<<" years old "<< full_name <<std::endl;
  return 0; //to identify if the program ran correctly or not
}