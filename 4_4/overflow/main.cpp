#include <iostream>

int main()
{
  int x{ 2'147'483'647 };
  std::cout << x << '\n';

  x = x + 1;
  std::cout << x << '\n';

  return 0;
}
