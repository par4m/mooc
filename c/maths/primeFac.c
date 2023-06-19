#include "stdio.h"
#include <stdlib.h>

int euclid_gcd(int a, int b) {
  int dividend = a >= b ? a : b;
  int divisor = a <= b ? a : b;

  while (divisor != 0) {
    int remainder = dividend % divisor;
    dividend = divisor;
    divisor = remainder;
  }
  return dividend;
}

int main(int argc, char *argv[]) {
  int a = 400, b = 124;
  printf("GCD of %d and %d is %d\n", a, b, euclid_gcd(a, b));

  return 0;
}
