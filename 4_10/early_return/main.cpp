#include <iostream>

// returns the absolute value of x
int abs(int x)
{
  if (x < 0)
    return -x;

  return x;
}

int main()
{
  std::cout << abs(4) << '\n';
  std::cout << abs(-3) << '\n';

  return 0;
}
