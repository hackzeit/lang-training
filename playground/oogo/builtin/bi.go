package main

import "fmt"

// Es necesario hacer esto porque no se puede aplicar métodos
// con tipos de datos no escrito en el mismo archivo. En este
// caso int es un built-in types
type Int int

// Ejemplo de OOP con built-in type
func (a *Int) duplicar(){
  *a *= 2
}

func main() {
  var a Int = 4
  fmt.Println("a:",a)
  a.duplicar()
  fmt.Println("a:",a)
}
