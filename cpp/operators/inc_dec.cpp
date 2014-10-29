#include <stdio.h>

void incremento() { // OMIT
  int x,y,z;
  x = 3;
  y = x++;  // x:4, y:3
  z = ++x;  // x:5, z:5
  printf("x:%d\ty:%d\tz:%d\n",x,y,z);
} // OMIT

void decremento() { // OMIT
  int x,y,z;
  x = 3;
  y = --x;  // x:2, y:2
  z = x--;  // x:1, z:2
  printf("x:%d\ty:%d\tz:%d\n",x,y,z);
} // OMIT

int main() {
  incremento();
  decremento();
}
