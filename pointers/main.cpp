#include <iostream>

int main(){
  int a = 9;
  int *p;
  p = &a;
  //std::cout << "Value stored at p " << p  << std::endl;
  printf("%d\n", p);
  printf("%d\n", *p);
  *p = 5;
  printf("%d\n", a);
  int b = 20;
  *p = b;
  printf("%d\n", p );
  printf("%d\n", a );
  return 0; 
}