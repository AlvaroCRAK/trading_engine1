#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int& age) : name(name), age(age) {}
void Person::introduce() {
  std::cout << "Hola, me llamo " << name << " y tengo " << age << " anhos.\n";
}

