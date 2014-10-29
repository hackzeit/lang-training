#include <stdio.h>

void aritmeticos_int() { // OMIT
  int a,b,c,d,e;
  a = 2 + 4;     // adicion         =>  a:6
  b = 8 - 3;     // sustraccion     =>  b:5
  c = 5 * 6;     // multiplicacion  =>  c:30
  d = 10 / 3;    // division        =>  d:3
  e = 10 % 3;    // modulo          =>  e:1
  printf("a:%d\tb:%d\tc:%d\td:%d\te:%d\n",a,b,c,d,e);
} // OMIT

void aritmeticos_float() { // OMIT
  float a,b,c,d,e,f;
  a = 2.5 + 4;     // adicion         =>  a:6
  b = 8 - 3.2;     // sustraccion     =>  b:5
  c = 5.2 * 6;     // multiplicacion  =>  c:30
  d = 10 / 3;      // division        =>  d:3.0
  e = 10.0 / 3;    // division        =>  e:3.33
  f = 10 % 3;      // modulo          =>  f:1.0
  // "10.0 % 3" o "10 % 3.0" o "10.0 % 3.0" son invalidos
  printf("a:%f\tb:%f\tc:%f\td:%f\te:%f\n",a,b,c,d,e);
} // OMIT

int main() {
  aritmeticos_int();
  aritmeticos_float();
}
