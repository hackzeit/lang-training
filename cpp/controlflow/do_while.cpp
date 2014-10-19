#include <iostream>

void dowhile1() { // START 1 OMIT
  int i = 0;
  do {
    std::cout << i << ", ";
    i++;
  } while(i < 10) ;
} // STOP 1 OMIT

void dowhile2() {
  int i = 0;
  do i++; while( i < 10);
  std::cout << i << std::endl;

  i = 13;
  do i++; while(i < 10);
  std::cout << i << std::endl;
}
