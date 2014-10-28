#include <stdio.h>

void asignacion1() { // OMIT
  int a,b;   // a:?,  b:?
  a = 10;    // a:10, b:?
  b = 4;     // a:10, b:4
  a = b;     // a:4,  b:4
  b = 7;     // a:4,  b:7
  printf("a:%d\tb:%d\n",a,b);
} // OMIT

void asignacion2() { // OMIT
  int m,n,p;    // m:?, n:?, p:?
  // p = 5;     // m:?, n:?, p:5
  // n = p;     // m:?, n:5, p:5
  // m = n;     // m:5, n:5, p:5
  m = n = p = 5;
  printf("m:%d\tn:%d\tp:%d\n",m,n,p);
} // OMIT

void asignacion3() { // OMIT
  int x,y;        // x:?, y:?
  // x = 5;       // x:5, y:?
  // y = 2 + x;   // x:5, y:7
  y = 2 + (x = 5);
  printf("x:%d\ty:%d\n",x,y);
} // OMIT
