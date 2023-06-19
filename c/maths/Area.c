#include <stdio.h>

struct Point {
  double x;
  double y;
};

double cross_product(struct Point a, struct Point b) {
  return a.x * b.y - a.y * b.x;
}

double area(struct Point a, struct Point b) {
  return cross_product(a, b) / 2.0;
}

int main(int argc, char *argv[]) {

  struct Point a;
  a.x = 3.0;
  a.y = 1.0;

  return 0;
}
