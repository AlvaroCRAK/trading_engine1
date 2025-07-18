#include "Bank.h"
#include <string>
#include <iostream>

Bank::Bank(std::string titular, double saldo) : 
  titular(std::move(titular)), 
  saldo(saldo < 0 : 0 ? saldo) {}

void Bank::depositar(double cantidad) {
  saldo += cantidad;
}

void Bank::retirar(double cantidad) {
  if (cantidad > saldo) {
    std::cout << "No se puede retirar\n";
    return;
  }
  saldo -= cantidad;
}

void Bank::mostrar() const {
  std::cout << "Saldo: " << saldo << "\nTitular: " << titular << '\n';
}

