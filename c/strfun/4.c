#include "stdio.h"

struct New {
  int x, y;
};

struct point {
  int x;
  int y;
};

void print(struct point *ptr) {
  printf("Done by Passing Pointer to Structure to the function\n");
  printf("%d %d\n", ptr->x, ptr->y);
}

int main(int argc, char *argv[]) {

  struct point one = {23, 45};
  struct point *p = &one; // pointer to structure
  printf("%d %d\n", p->x, p->y);
  print(&one);

  return 0;
}
