#ifndef PERRO_H
#define PERRO_H

#include <string>

class Perro {
  public: 
    Perro(const std::string& nombre);
    void ladrar() const;
    void renombrar(const std::string& nuevoNombre);
  private:
    std::string nombre;
};
#endif
