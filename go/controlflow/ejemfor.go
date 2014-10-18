package tunki

import "fmt"

func for1() { // START 1 OMIT
  var a int = 6
  for a < 6 {
    fmt.Println(a)
  }
} // STOP 1 OMIT

func for2() { // START 2 OMIT
  sum := 0
  for i := 0; i < 10; i++ {
    sum += i
  }
} // STOP 2 OMIT

func for3() { // START 3 OMIT
  var x [4]int = {3, 6 , 7, 2}
  for i, v := range x {
    fmt.Println(x[i], "==", v)
    x[i] = 2 * x[i] + 1
    // v = 2 * x[i] + 1 // No es válido, `v` es solo de lectura.
  }
} // STOP 3 OMIT

func for4() { // START 4 OMIT
  var m = map[string]int {
    "fa": 1,
    "fe": 2,
    "fi": 3,
    "fo": 4,
    "fu": 5,
  }
  var n = map[string]int
  for llave, valor := range m {
    n[llave] = valor // estamos copiando todo m en n
  } 
} // STOP 4 OMIT

func for5() { // START 5 OMIT
  var m = map[string]int {
    "fa": 1,
    "fe": 2,
    "fi": 3,
    "fo": 4,
    "fu": 5,
  }
  // si solo se quiere la llave
  for llave := range m {
    if llave == "fe" {
      m[llave] = 2 * m[llave] + 1
    }
  }
} // STOP 5 OMIT

func for6() { // START 6 OMIT
  var m = map[string]int {
    "fa": 1,
    "fe": 2,
    "fi": 3,
    "fo": 4,
    "fu": 5,
  }
  // si solo se quiere la llave
  for _, valor := range m {
    if valor == 5 {
      fmt.Println("La llave es fu")
    }
  }
} // STOP 6 OMIT
