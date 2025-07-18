#ifndef BANK_H
#define BANK_H

#include <string>

class Bank {
  public:
    Bank(std::string titular, double saldo);
    void depositar(double cantidad);
    void retirar(double cantidad);
    void mostrar() const;
  private:
    std::string titular;
    double saldo;
};

#endif // !BANK_H

