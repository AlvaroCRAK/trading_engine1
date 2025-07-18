#include "Bank.h"
int main() {
  Bank b("Alvaro", 50);
  b.mostrar();
  b.depositar(50);
  b.mostrar();
  b.retirar(200);
  b.mostrar();
  b.retirar(100);
  b.mostrar();
  return 0;
}
