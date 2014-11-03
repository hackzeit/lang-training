#include <stdio.h>


// Mediante entrada estandar adquirir:
//   x : float
//   n : int
//
// Calcular float p <= x ^ n
// 
// Y mediante salida estandar:
//   p : float
int main() {
  float x;
  int n;
  float p = 1;
  
  printf("Ingrese un float x: ");
  scanf("%f",&x);

  printf("Ingrese un int n: ");
  scanf("%d",&n);

  if ( x == 0 && n <= 0) {
    puts("Error: x debe ser positivo para n no positivo");
    return -1;
  } 

  if ( n < 0 ) {
    x = 1 / x;
    n = -n;
  }
 
  for( ; n != 0 ; n >>= 1) {
    if ( n % 2 == 1 ) {
      p *= x;
    }
    x *= x;
  }

  printf("%f ^ %d == %f\n",x,n,p);
  return 0;
}
