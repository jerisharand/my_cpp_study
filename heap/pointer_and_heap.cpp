#include <iostream>

int main() {
  int *ptr = new int;
  *ptr = 1;         // alse p[0] = 1 because *(p + 0) = 1
  std::cout << "*ptr = " << *ptr << std::endl;
  return 0
}
