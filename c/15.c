#include <stdio.h>

int main(int argc, char *argv[]) {

  int a; // goes on heap
  int *p;
  p = (int *)malloc(sizeof(int));
  *p = 10;
  free(p);
  p = (int *)malloc(20 * sizeof(int));
  return 0;
}
