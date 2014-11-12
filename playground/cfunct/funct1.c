#include <stdio.h>

void f1(int x) {
  float f = x;
  printf("&x:%d\t&f:%d\n",&x,&f);
}

int main () {
  f1(4);
  f1(3);
  f1(5);
}
