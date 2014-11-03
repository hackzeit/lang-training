#include <stdio.h>

inline int max(a,b)
{ return (a > b)? a :  b; }

inline void imprimir(char * s, int d)
{ printf("%s = %d\n",s, d); }

int main ()
{
  int a = max(4,5);
  imprimir("a", a);
  int b = max(a,7);
  imprimir("b", b);
  return 0;
}
