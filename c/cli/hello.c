#include "stdio.h"

int main(int argc, char **argv) {

  printf("hello world - %d \n", argc);
  for (int i = 0; i < argc; i++) {
    printf("arg %d - %s", i, argv[i]);
  }
}
