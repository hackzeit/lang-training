#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  int A[8];
  
  if (argc < 4 ) {
    puts("faltan argumenos. Deden ser por lo menos 4");
    return 1;
  }
  
  int n = argc < 10 ? argc -2: 8;
  for (int i = 0; i < n; i++) {
    A[i] = atoi(argv[i+2]);
  }

  int s = 0;
  switch ( argv[1][0] ) {
    case '+':
      for (int i = 0; i < n; i++)
        s += A[i];
      break;
    case '-':
      A[0] = atoi(argv[2]);
      A[1] = atoi(argv[3]);
      s = A[0] - A[1];
      break;
    case 'x':
      s = 1;
      for (int i = 0; i < n; i++)
        s *= A[i];
        break;
    case '/':
      A[0] = atoi(argv[2]);
      A[1] = atoi(argv[3]);
      if (A[1] == 0) {
        puts("division entre cero invalida");
        return 3;
      }
      s = A[0] / A[1];
      break;
    default:
      puts("operador no reconocido");
      return 2;
  } 
  printf("%d\n",s);
  return 0;
}
