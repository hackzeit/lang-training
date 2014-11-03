package main

import "fmt"

func main() {
  Array_a := [10]byte{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}
  Slice_a := Array_a[2:5]
  fmt.Println("Array_a =",Array_a,"\tlen:",len(Array_a),"\tcap:",cap(Array_a))
  fmt.Println("Slice_a =",Slice_a,"\tlen:",len(Slice_a),"\tcap:",cap(Slice_a))
  fmt.Println()

  Slice_a = append(Slice_a,'x','y','z')
  fmt.Println("Array_a =",Array_a,"\tlen:",len(Array_a),"\tcap:",cap(Array_a))
  fmt.Println("Slice_a =",Slice_a,"\tlen:",len(Slice_a),"\tcap:",cap(Slice_a))
  fmt.Println()

  Slice_a = append(Slice_a,'r','s','a','A','A')
  fmt.Println("Array_a =",Array_a,"\tlen:",len(Array_a),"\tcap:",cap(Array_a))
  fmt.Println("Slice_a =",Slice_a,"\tlen:",len(Slice_a),"\tcap:",cap(Slice_a))
  fmt.Println()


  Slice_a[0] = 'C'
  fmt.Println("Array_a =",Array_a,"\tlen:",len(Array_a),"\tcap:",cap(Array_a))
  fmt.Println("Slice_a =",Slice_a,"\tlen:",len(Slice_a),"\tcap:",cap(Slice_a))
  fmt.Println()

  Slice_a[1] = 'B'
  fmt.Println("Array_a =",Array_a,"\tlen:",len(Array_a),"\tcap:",cap(Array_a))
  fmt.Println("Slice_a =",Slice_a,"\tlen:",len(Slice_a),"\tcap:",cap(Slice_a))
  fmt.Println()
}
