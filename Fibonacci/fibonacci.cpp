#include "fibonacci.h"

unsigned long Fibonacci::get(const int n)
{
    if (0 == n) return 0;
    if (1 == n) return 1;
    else return (get(n-2) + get(n-1));
}
