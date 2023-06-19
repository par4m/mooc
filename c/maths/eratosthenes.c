#include "math.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int Primes[10 + 1];
  for (int i = 0; i <= 10; i++) {
    Primes[i] = 1;
  }
  Primes[0] = 1;
  Primes[1] = 0;
  for (int j = 0; j < 11; j++) {
    printf("%d\n", Primes[j]);
  }

  for (int i = 2; i <= sqrt(10); i++) {
    if (Primes[i] == 1) { // prime
      for (int j = 2; i * j <= 10; j++) {
        Primes[i * j] = 0;
      }
    }
  } // i is prime if primes[i] is 1

  // Printing Array
  for (int j = 0; j < 10; j++) {
    printf("%d\n", Primes[j]);
  }
  return 0;
}
