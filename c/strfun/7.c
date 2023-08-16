#include <stdio.h>

struct point {
  int x;
  int y;
};

void print(struct point arr[]) {
  int i;
  for (int i = 0; i < 2; i++) {
    printf("%d %d", arr[i].x, arr[i].y);
  }
}

int main(int argc, char *argv[]) {
  struct point arr[2] = {{1, 2}, {3, 4}};
  print(arr);
  return 0;
}
