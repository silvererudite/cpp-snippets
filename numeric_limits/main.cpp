#include <iostream>
#include <limits>

int main(){

  std::cout << "the range for short " << std::numeric_limits<short>::min() <<" to " << std::numeric_limits<short>::max() << std::endl;
  std::cout << "the range for unsigned short " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
  std::cout << "the range for int " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
  std::cout << "the range for unsigned int " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << "the range for signed int " << std::numeric_limits<signed int>::min() <<" to " << std::numeric_limits<signed int>::max() << std::endl;
  return 0; 
}
