#include <iostream> // entre <.> por ser biblioteca externa (pero del sistema)
#include "aritmetica.h" // entre "." por ser biblioteca interna
#include "include/imprimir.h"

int main() {
  int x = suma(4,6);
  int y = resta(x, 3);
  std::cout << "x = " << x << "\ty = " << y << std::endl;
  imprimir("x = ",x);
  imprimir("y = ", y);
  return 0;
}
