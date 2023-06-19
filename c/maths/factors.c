#include "stdio.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = 12;
  for (int i = 3; i < n; i++) {
    if (n % i == 0) {
      printf("%d is a factor\n", i);
    }
  }

  return 0;
}
