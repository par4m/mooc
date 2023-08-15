#include "stdio.h"

enum Bool { False, True };

int main(int argc, char *argv[]) {

  enum Bool var = True;
  printf("%d", var);
  return 0;
}
