#include <stdio.h>

inline void f1(int x) {
  float f = x;
  printf("&x:%d\t&f:%d\n",&x,&f);
}

int main () {
  int x = 4;
  printf("Main: &x:%d\tx:%d\n",&x,x);
  f1(x);
  f1(3);
  f1(5);
}
