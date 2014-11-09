#include <stdio.h>

typedef struct vec { float x; int y; } Vec;

// Variables
int i1 = 2, i2 = 4;
float f1 = 3.5, f2 = 4.4;
Vec v1 = {2.1, 3}, v2 = {4.3, 1};

// punteros
int * a, *b;
float * r, * s;
Vec * p, * q;

void init() {
  a = &i1;
  b = &i2;
  r = &f1;
  s = &f2;
  p = &v1;
  q = &v2;
}

void print_ints() {
  printf("i1:%d\ti2:%d\n",i1,i2);
  printf("a:%d\tb:%d\n",a,b);
  printf("*a:%d\t*b:%d\n",*a,*b);
}

void print_floats() {
  printf("f1:%f\tf2:%f\n",f1,f2);
  printf("r:%d\ts:%d\n",r,s);
  printf("*r:%f\t*s:%f\n",*r,*s);
}

void print_vecs() {
  printf("v1:{%f,%d}\tv2:{%f,%d}\n", v1.x ,v1.y, v2.x, v2.y);
  printf("p:%d\tq:%d\n", p, q);
  printf("*p:{%f,%d}\t*q:{%f,%d}\n", p->x, p->y, q->x, q->y);
}

void swap_simple() {
  void * w;
  puts("==================================");
  print_ints();
  puts("----------------------------------");
  w = a;
  a = b;
  b = w;
  print_ints();
  puts("==================================");
  print_floats();
  puts("----------------------------------");
  w = r;
  r = s;
  s = w;
  print_floats();
  puts("==================================");
  print_vecs();
  puts("----------------------------------");
  w = p;
  p = q;
  q = w;
  print_vecs();
  puts("==================================");
}

int main() {
  init();
  swap_simple();
}
