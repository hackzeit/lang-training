#include <stdio.h>

int main() {
  int A[6] = {3, 5, 2, 7, 1};
  int s;

  printf("%d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5]);
  for ( int i = 5; i > 0; i--) {
    for ( int j = 0; j < i; j++) {
      s = A[i];
      A[i] = A[i+1];
      A[i+1] = s;
    }
  }
  printf("%d %d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4],A[5]);

  char S[] = "Hola clase";
  printf("%d %d %d %d\n",&A[2],&A[3],*(A+3),*A);
  printf("%d %d %d\n",&S[2],&S[3],&S[3]-S);
  return 0;
}
