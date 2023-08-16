#include "stdio.h"

struct point {
  int x, y;
};

void print(struct point p) { printf("%d %d\n", p.x, p.y); }

int main(int argc, char *argv[]) {
  struct point p1 = {23, 45};
  struct point p2 = {56, 90};
  print(p1);
  print(p2);
  return 0;
}
