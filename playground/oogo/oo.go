package main

import "fmt"

type S struct {
  a, b int
}

func (s S) porValor(x int) {
  s.b = s.b + s.a;
  s.a = x;
}

func (s *S) porReferencia(x int) {
  s.b = s.b + s.a;
  s.a = x;
}

func main() {
  v := S{2,3}
  p := &S{4,5}
  
  fmt.Println("Por valor:")
  fmt.Println("\tAntes:")
  fmt.Printf("\t\t%v",v)
  fmt.Printf("\t\t%v",&v)
  v.porValor(3)
  fmt.Println("\n\tDespués de por valor:")
  fmt.Printf("\t\t%v",v)
  fmt.Printf("\t\t%v",&v)
  v.porReferencia(3)
  fmt.Println("\n\tDespués de por referencia:")
  fmt.Printf("\t\t%v",v)
  fmt.Printf("\t\t%v",&v)

  fmt.Println("\nPor referencia:")
  fmt.Println("\tAntes:")
  fmt.Printf("\t\t%v",p)
  fmt.Printf("\t\t%v",&p)
  fmt.Printf("\t\t%v",*p)
  p.porValor(5)
  fmt.Println("\n\tDespués de por valor:")
  fmt.Printf("\t\t%v",p)
  fmt.Printf("\t\t%v",&p)
  fmt.Printf("\t\t%v",*p)
  p.porReferencia(5)
  fmt.Println("\n\tDespués de por referencia:")
  fmt.Printf("\t\t%v",p)
  fmt.Printf("\t\t%v",&p)
  fmt.Printf("\t\t%v",*p)
  
  fmt.Println()
}
