#include <iostream>

int main()
{
  int x{012}; // 0 before the number means this is octal
  std::cout << x << '\n';

  int y{0xF}; // 0x before the number means this is hexadecimal
  std::cout << y << '\n';

  int bin{}; // assume 16-bit int
  bin = 0x0001; // assign binary 0000 0000 0000 0001 to the variable
  bin = 0x0002; // assign binary 0000 0000 0000 0010 to the variable
  bin = 0x0004; // assign binary 0000 0000 0000 0100 to the variable
  bin = 0x0008; // assign binary 0000 0000 0000 1000 to the variable
  bin = 0x0010; // assign binary 0000 0000 0001 0000 to the variable
  bin = 0x0020; // assign binary 0000 0000 0010 0000 to the variable
  bin = 0x0040; // assign binary 0000 0000 0100 0000 to the variable
  bin = 0x0080; // assign binary 0000 0000 1000 0000 to the variable
  bin = 0x00FF; // assign binary 0000 0000 1111 1111 to the variable
  bin = 0x00B3; // assign binary 0000 0000 1011 0011 to the variable
  bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

  // C++14 we can use 0b prefix
  int b{};        // assume 16-bit ints
  b = 0b1;        // assign binary 0000 0000 0000 0001 to the variable
  b = 0b11;       // assign binary 0000 0000 0000 0011 to the variable
  b = 0b1010;     // assign binary 0000 0000 0000 1010 to the variable
  b = 0b11110000; // assign binary 0000 0000 0000 0001 to the variable

  // Digit separators
  int a{0b1011'0010}; // assign binary 1011 0010 to the variable
  long value{2'132'673'462};

  return 0;
}
