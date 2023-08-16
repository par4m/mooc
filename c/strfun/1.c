#include "stdio.h"

struct Student {
  char name[50];
  int age;
  int roll_no;
  float marks;
};

void print(char name[], int age, int roll, float marks) {
  printf("%s %d %d %.2f", name, age, roll, marks);
}

int main(void) {
  struct Student s1 = {"Param", 16, 50, 72.5};
  print(s1.name, s1.age, s1.roll_no, s1.marks);
  return 0;
}
