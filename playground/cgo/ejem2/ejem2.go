package main

/*
#include <stdio.h>
#include <stdlib.h>

void myprint(char* s) {
  printf("%s", s);
}
*/
import "C"

import "unsafe"

func main() {
  cs := newCS("Hola desde stdio en Go!\n")
  cs.myprint()
  cs.free()
}

type CS struct {
  s *C.char
}

func newCS(gs string) *CS {
  // &CS{ C.CString(gs) } no asigna correctamente a s
  return &CS{s: C.CString(gs)}
}

func (cs *CS) myprint() {
  C.myprint(cs.s)
}

func (cs *CS) free() {
  C.free(unsafe.Pointer(cs.s))
}
