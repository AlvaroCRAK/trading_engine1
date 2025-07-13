#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
  public:
    Car(std::string brand, std::string model, int speed);
    void accelerate(int amount);
    void brake(int amout);
    void showStatus();
  private:
    std::string brand;
    std::string model;
    int speed;
};

#endif // !CAR_H
