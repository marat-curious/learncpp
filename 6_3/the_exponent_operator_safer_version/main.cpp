#include <cassert>
#include <cstdint>
#include <iostream>
#include <limits> // for std::numeric_limits

// A safer (but slower) version of powint() that checks for overflow
// NOTE: exp must be non-negative
// Returns std::numeric_limits<std::int64_t>::max() if overflow occurs
constexpr std::int64_t powint_safe(std::int64_t base, int exp)
{
  assert(exp >= 0 && "powint_safe: exp parameter has negative value");

  // handle 0 case
  if (base == 0)
  {
    return (exp == 0) ? 1 : 0;
  }

  std::int64_t result{1};

  // To make the range checks easier, we'll ensure base is positive
  // We'll flip the result at the end if needed
  bool negativeResult{false};

  if (base < 0)
  {
    base = -base;
    negativeResult = (exp & 1);
  }

  while (exp > 0)
  {
    if (exp & 1)
    {
      if (result > std::numeric_limits<std::int64_t>::max() / base)
      {
        std::cerr << "powint_safe(): result owerflowed\n";
        return std::numeric_limits<std::int64_t>::max();
      }

      result *= base;
    }

    exp /= 2;

    // If we're done, get out there
    if (exp <= 0)
    {
      break;
    }

    // The following only needs to execute if we're going to iterate again
    // Check if base will overflow when multiplied by base
    if (base > std::numeric_limits<std::int64_t>::max() / base)
    {
      std::cerr << "powint_safe(): base overflowed\n";
      return std::numeric_limits<std::int64_t>::max();
    }

    base *= base;
  }

  if (negativeResult)
  {
    return -result;
  }
}

int main()
{
  std::cout << powint_safe(7, 12) << '\n';
  std::cout << powint_safe(70, 12) << '\n'; // 70 to the 12th power (will return the max 64-bit int value)

  return 0;
}
