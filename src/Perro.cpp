#include "Perro.h"
#include <iostream>

Perro::Perro(const std::string& nombre) {
  this->nombre = nombre;
}

void Perro::ladrar() const{
  std::cout << nombre << " dice: !Guau guau!\n";
}

void Perro::renombrar(const std::string& nuevoNombre) {
  nombre = nuevoNombre;
}
