#include <stdio.h>

int main(int argc, char *argv[]) {
  int B[2][3] = {{2, 3, 6}, {4, 5, 8}};
  int(*P)[3] = B;
  printf("*(P) = %d\n", P);
  printf("*(P + 1) = %d\n", P + 1);

  return 0;
}
