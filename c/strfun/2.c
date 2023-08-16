#include "stdio.h"

struct charset {
  char s;
  int i;
};

void keyValue(char *s, int *i) { scanf("%c %i", s, i); }

int main(void) {
  int j;
  struct charset cs;
  keyValue(&cs.s, &cs.i);
  printf("%c %d", cs.s, cs.i);

  return 0;
}
