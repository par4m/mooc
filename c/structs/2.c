#include "stdio.h"

struct employee {
  char *name;
  int age;
  int salary;
};

int Manager() {
  struct employee manager;
  return manager.salary = 550000;
}

int main(int argc, char *argv[]) {

  struct employee emp1;
  struct employee emp2;
  printf("Enter Salary of Employee 1: ");
  scanf("%d", &emp1.salary);
  printf("Enter Salary of Employee 2: ");
  scanf("%d", &emp1.salary);
  printf("\n");
  printf("Salary of emp1 is %d", emp1.salary);
  printf("Salary of emp2 is %d", emp2.salary);
  printf("Salary of Manager is %d", Manager());

  return 0;
}
