#include <stdio.h>
     
int main(void) {
  int A[] = {1,2,3,4,5,6,7};
  printf("%d\n", A[5]);
  printf("%d\n", 5[A]);
  printf("%d\n", *(5+A));
  return 0;
}
