package main

import "fmt"

// Mediante entrada estandar adquirir:
//   x : float
//   n : int
//
// Calcular float p <= x ^ n
// 
// Y mediante salida estandar:
//   p : float
func main() {
  var x float32
  var n int
  
  fmt.Print("Ingrese un float x: ")
  fmt.Scanf("%f",&x)

  fmt.Print("Ingrese un int n: ")
  fmt.Scanf("%d",&n)

  p,err := mypow(x,n);
  if err != nil {
    fmt.Print(err)
    return
  }
  fmt.Printf("%f ^ %d == %f\n",x,n,p);
}

func mypow(x float32, n int) (p float32, err error) {
  p = 1;
  if x == 0 && n <= 0 {
    err = fmt.Errorf("Error: La base(%f) debe ser positiva para exponente(%d) no positivo\n",x,n)
    return
  }

  if n < 0 {
    x = 1 / x;
    n = -n;
  }

  for ; n != 0 ; n >>= 1 {
    if  n & 1 == 1 {
      p *= x;
    }
    x *= x;
  }
  return
}
