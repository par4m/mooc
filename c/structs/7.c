#include <stdio.h>

struct Car {
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
};

int main() {
  struct Car c[2];
  for (int i = 0; i < 2; i++) {
    printf("Enter car %d fuel tank cap ", i + 1);
    scanf("%d", &c[i].fuel_tank_cap);
    printf("\nEnter car %d seating_cap ", i + 1);
    scanf("%d", &c[i].seating_cap);
    printf("\nEnter car %d city mileage ", i + 1);
    scanf("%f", &c[i].city_mileage);
    printf("\n");
  }

  for (int i = 0; i < 2; i++) {
    printf("Car %d Details", i + 1);
    printf("Fuel Tank Cap %d\n", c[i].fuel_tank_cap);
    printf("Seating Cap %d\n", c[i].seating_cap);
    printf("Mileage %f\n", c[i].city_mileage);
  }
  return 0;
}
