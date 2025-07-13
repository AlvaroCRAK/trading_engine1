#include <iostream>
#include "Car.h"

int main() {
  Car car("Toyota", "A-9", 100);
  car.showStatus();
  car.accelerate(20);
  car.showStatus();
  car.brake(40);
  car.showStatus();
  return 0;
}
