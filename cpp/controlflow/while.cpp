#include <iostream>

void while1() { // START 1 OMIT
  int n = 10;
  while ( n > 0 ) {
    std::cout << n << ", ";
    n--;
  }
} // STOP 1 OMIT

void while2() { // STOP 2 OMIT
  int i = 0;
  while ( i < 10 ) {
    std::cout << i << ", ";
    i++;
  }
} // STOP 2 OMIT
