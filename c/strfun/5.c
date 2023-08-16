#include <stdio.h>

struct point {
  int x, y;
};

struct point edit(struct point p) {
  p.x++;
  p.y += 5;
  return p;
}

void print(struct point p) { printf("%d %d\n", p.x, p.y); }

int main(int argc, char *argv[]) {
  struct point p1 = {23, 45};
  struct point p2 = {56, 90};
  printf("Before Edit\n");
  print(p1);
  print(p2);
  p1 = edit(p1);
  p2 = edit(p2);
  printf("After Edit\n");
  print(p1);
  print(p2);
  return 0;
}
