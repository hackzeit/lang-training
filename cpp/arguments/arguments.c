#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  // START var necesaria OMIT
  int A[8];
  int v;
  // STOP var necesaria OMIT
  
  // START minarg OMIT
  if (argc < 4 ) {
    puts("faltan argumenos. Deden ser por lo menos 4");
    return 1;
  }
  // STOP minarg OMIT
  
  // START atoi OMIT
  int n = argc < 10 ? argc -2: 8; // numero de elementos llenos en A
  for (int i = 0; i < n; i++) {
    A[i] = atoi(argv[i+2]);
  }
  // STOP atoi OMIT

  switch ( argv[1][0] ) {
    case 's':
      // START SUM OMIT
      v = 0;
      for (int i = 0; i < n; i++)  v += A[i];
      // STOP SUM OMIT
      break;
    case 'r':
      // START RES OMIT
      v = A[0] - A[1];
      // STOP RES OMIT
      break;
    case 'm':
      // START MUL OMIT
      v = 1;
      for (int i = 0; i < n; i++)  v *= A[i];
      // STOP MUL OMIT
      break;
    case 'd':
      // START DIV OMIT
      if (A[1] == 0) {
        puts("division entre cero invalida");
        return 3;
      }
      v = A[0] / A[1];
      // STOP DIV OMIT
      break;
    default:
      // START noop OMIT
      puts("operador no reconocido");
      return 2;
      // STOP noop OMIT
  } 
  // START result OMIT
  printf("%d\n",v);
  // STOP result OMIT
  return 0;
}
