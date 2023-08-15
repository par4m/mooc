#include "stdio.h"

struct Car {
  char *engine;
  char *fuel_type;
  int fuel_tank_cap;
  float city_mileage;
};

struct employee {
  char *name;
  int age;
  int salary;
};

struct Car car1;
struct Car car2;

int main(int argc, char *argv[]) {
  car1.engine = "DDis 190 Engine";
  car2.engine = "1.2L Kappa Dual VTVT";
  printf("Enter Fuel Tank Cap for both car1 and car2: ");
  scanf("%d%d", &car1.fuel_tank_cap, &car2.fuel_tank_cap);
  printf("Fuel tank cap for car1 is : %d and for car2 is : %d",
         car1.fuel_tank_cap, car2.fuel_tank_cap);
  return 0;
}
