#include <stdio.h>

int expo(int x, int n) {
  if (n == 0) {
    return 1;
  }
  return x * expo(x, n - 1);
}

int main(int argc, char *argv[]) { return 0; }
