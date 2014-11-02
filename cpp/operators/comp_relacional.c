#include <stdio.h>

void comp() { // OMIT
  int a = 2, b = 3, c = 6;
  printf("%d\t", 7 == 5);      // false
  printf("%d\t", b != 2);      // true
  printf("%d\t", a == 5);      // false
  printf("%d\n", (b=2) == a);  // true
  printf("a:%d\tb:%d\tc:%d\n",a,b,c);
} // OMIT

void relacional() { // OMIT
  bool v;
  int a = 2, b = 3, c = 6;
  printf("%d\t", 5 > 4);      // true
  printf("%d\t", 6 >= 6);     // true
  printf("%d\t", 5 < 5);      // false
  printf("%d\t", a*b >= c);   // true, pues (2*3 >= 6)
  printf("%d\n", b+4 > a*c);  // false, pues (3+4 > 2*6)
  printf("a:%d\tb:%d\tc:%d\n",a,b,c);
} // OMIT

int main() {
  comp();
  printf("\n");
  relacional();
  return 0;
}
