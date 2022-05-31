
#include <iostream>

int main(){
  // int a = 9;
  // int *p;
  // p = &a;

  // pointer arithmetic

  // printf("%d\n", p);
  // printf("size of integer is %d bytes \n", sizeof(int));
  // printf("%d\n", p+1);

  int b = 1025;
  int *pb = &b;

  printf("size of integer is %d bytes \n", sizeof(int));
  printf("Address is %d, value = %d\n", pb, *pb);

  return 0; 
}