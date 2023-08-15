#include <stdio.h>

struct abc {
  int x, y, z;
};

int main(int argc, char *argv[]) {
  struct abc a = {0, 1};
  struct abc *ptr = &a;
  printf("%d %d", ptr->x, ptr->y);
  printf("%d %d", (*ptr).x, (*ptr).y);
  printf("%d", sizeof(a)); // 12

  return 0;
}
