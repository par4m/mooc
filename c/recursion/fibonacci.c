#include <stdio.h>

int F[51];

int Fibo(int n) {

  if (F[n] != -1) {
    return F[n];
  } else {
    F[n] = Fibo(n - 1) + Fibo(n - 2);
    return F[n];
  }
}

int main() {
  for (int i = 0; i < 51; i++) {
    F[i] = -1; // Fact not calculated
  }
  F[0] = 0;
  F[1] = 1;
  int n;
  printf("Give me an n: \n");
  scanf("%d", &n);
  // int result = Fib(n);
  int result1 = Fibo(n);
  // printf("%d\n", result);
  printf("%d\n", result1);

  return 0;
}
