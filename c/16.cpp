#include <iostream>

int main(int argc, char *argv[]) {

  int a; // goes on stack
  int *p;
  p = new int;
  *p = 10;
  delete p;
  p = new int[20];
  delete[] p;
}
