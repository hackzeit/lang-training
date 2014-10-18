package proglang

import "fmt"

func if1() int { // START 1 OMIT
  var x int = 6
  if x > 0 {
    return 2 * x + 1
  }
} // STOP 1 OMIT

func if2() int { // START 2 OMIT
  if x := 6; x > 0 {
    return 2 * x + 1
  }
} // STOP 2 OMIT

func if3() { // START 3 OMIT
  if x := 6, x < 0 {
    fmt.Println("x es negativo")
  } else {
    fmt.Println("x es cero  prositivo")
  }
} // STOP 3 OMIT

func if4() { // START 4 OMIT
  if x := 6, x < 0 {
    fmt.Println("x es negativo")
  } else if x < 2 {
    fmt.Println("0 <= x < 2")
  } else if x < 4 {
    fmt.Println("2 <= x <4")
  } else {
    fmt.Println("x >= 4")
  }
} // START 4 OMIT
