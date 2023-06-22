#include <stdio.h>
int fact(int n) {
  printf("Im calculating F of %d\n", n);
  if (n == 0) {
    return 1;
  };
  int F = n * fact(n - 1);
  printf("Done calculating F of %d = %d\n", n, F);
  return F;
}

int main(int argc, char *argv[]) {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int fac = fact(n);
  printf("%d\n", fac);

  return 0;
}
