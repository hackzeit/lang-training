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
  
  int n = argc < 10 ? argc -2: 8; // numero de elementos llenos en A

  for (int i = 0; i < n; i++) {
    A[i] = atoi(argv[i+2]);
  }

  switch ( argv[1][0] ) {
    case 's':
      // START SUM OMIT
      v = 0;
      for (int i = 0; i < n; i++)
        v += A[i];
      // STOP SUM OMIT
      break;
    case 'r':
      // START RES OMIT
      A[0] = atoi(argv[2]);
      A[1] = atoi(argv[3]);
      v = A[0] - A[1];
      // STOP RES OMIT 
      break;
    case 'm':
      // START MUL OMIT
      v = 1;
      for (int i = 0; i < n; i++)
        v *= A[i];
      // STOP MUL OMMIT
      break;
    case 'd':
      // START DIV OMIT
      A[0] = atoi(argv[2]);
      A[1] = atoi(argv[3]);
      if (A[1] == 0) {
        puts("division entre cero invalida");
        return 3;
      }
      v = A[0] / A[1];
      // STOP DIV OMIT
      break;
    default:
      puts("operador no reconocido");
      return 2;
  } 
  printf("%d\n",v);
  return 0;
}
