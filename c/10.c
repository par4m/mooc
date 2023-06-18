#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char C[4] = "JOHN";
  char B[5] = {'J', 'O', 'H', 'N', '\0'};
  printf("Size in bytes = %d\n", sizeof(C));
  int len = strlen(C);
  printf("%s\n", C);
  char C1[80];
  char *C2 = C1;
  return 0;
}
