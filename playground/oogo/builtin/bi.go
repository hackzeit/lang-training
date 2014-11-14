package main

import "fmt"

type Int int

func (a *Int) duplicar(){
  *a *= 2
}

func main() {
  var a Int = 4
  fmt.Println("a:",a)
  a.duplicar()
  fmt.Println("a:",a)
}
