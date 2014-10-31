#include <stdio.h>

void aritmeticos() { // OMIT
  int a  = 2;
  a += 3;     // a = a + 3; // a:5
  a *= 6;     // a = a * 6; // a:30
  a %= 7;     // a = a % 7; // a:2
  printf("a:%d\n",a);
} // OMIT

void shift() { // OMIT
  char a = 97, b = -39;
  unsigned char m = 97, n = 217;
  
} // OMIT

void bitwise() { // OMIT
  unsigned char a = 97;
  unsigned char b = 217;
  a |= b;
  b &= 34;
  a ^= b;
  printf("a = %d\tb = %d\n",a,b);
} // OMIT

int main() {
  aritmeticos();
  return 0;
}
