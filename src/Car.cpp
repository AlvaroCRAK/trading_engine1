#include "Car.h"
#include <iostream>
#include <string>

Car::Car(std::string brand, std::string model, int speed) {
  this->brand = brand;
  this->model = model;
  this->speed = speed;
}

void Car::accelerate(int amount) {
  speed += amount;
}
 
void Car::brake(int amount) {
  speed -= amount;
}

void Car::showStatus() {
  std::cout << "Brand: " << brand << '\n';
  std::cout << "Model: " << model << '\n';
  std::cout << "Speed: " << speed << '\n';
}
