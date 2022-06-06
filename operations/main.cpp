#include <iostream>

int main(){

  int a {6};
  int b {3};
  int c {8};
  int d {9};
  int e {3};
  int f {2};
  int g {5};

  //int result = a + b * c - d/e - f + g; cpp precendence table
  //int result = (a + b) * c - d/e - f + g; // custom precedence
  
  std::cout << "operation result " << a++ << std::endl;
  std::cout << "operation result " << ++b << std::endl;
  std::cout << "operation result " << a << std::endl;
  std::cout << "comparision operator " << (a < b) << std::endl; // the parentheses is necessary ref to precedence operator table
  return 0; 
}
