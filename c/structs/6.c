#include "stdio.h"

struct Car {
  char *engine;
  char *fuel_type;
  int fuel_tank_cap;
  int seating_cap;
  float city_mileage;
};

int main(int argc, char *argv[]) {
  struct Car car1 = {"190 Engine", "Diesel", 37, 5, 19.74};
  struct Car car2 = {"Kappa", "Petrol", 22, 8, 14.5};

  return 0;
}
