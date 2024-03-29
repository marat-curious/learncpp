#include <iostream>

int main() {
  int width;
  width = 5; // copy assigment of value 5 into variable width

  std::cout << width; // prints 5

  width = 7; // change value stored in variable width to 7

  std::cout << width; // prints 7

  // Initialization

  int a; // no initializer (default initialization)
  int b = 5; // initializer after equals sign (copy initialization)
  int c(6); // initializer in parenthesis (direct initialization)

  // List initialization method (C++11) (preffered)
  int d {7}; // initializer in braces (direct list initialization)
  int e = {8}; // initializer in braces after equals sign (copy list initialization)
  int f {}; // initializer is empty braces (value initialization)

  return 0;
}
