#include <iostream>
#include "Perro.h"

int main() {
  Perro miPerro("firulais");
  miPerro.ladrar();
  miPerro.renombrar("Rock");
  miPerro.ladrar();
  std::cout << "Trading engine started\n";
  return 0;
}
