#include <stdio.h>

void switch1()
{ // START 1 OMIT
  int x = 2;
  switch(x) {
    case 1:
      puts( "valor de x == 1");
      break;
    case 2:
      puts("valor de x == 2"); 
  }
} // STOP 1 OMIT

void switch2()
{ // START 2 OMIT
  int x = 6;
  switch(x) {
    case 1:
      puts("valor de x == 1");
      break;
    case 2:
      puts("valor de x == 2"); 
      break;
    default:
      puts("valor de x != 1 y x != 2");
      break;
  }
} // STOP 2 OMIT

void switch3()
{ // START 3 OMIT
  int x = 3;
  switch(x) {
    case 6:
      puts("x = 6");
      break;
    case 5:
      puts("x == 5");
    case 4:
      puts("x >= 4");
    case 3:
      puts("x >= 3");
      break;
    default:
      puts("x < 3 o x > 6");
      break; // El ultimo 'break;' es innecesario
  }
} // STOP 3 OMIT

void switch4()
{ // START 4 OMIT
  int x = 3;
  switch(x) {
    case 6:
      puts("x = 6");
      break;
    case 5:
    case 4:
    case 3:
      puts("x es 3, 4 o 5");
      break;
    default:
      puts("x < 3 o x > 6");
  }
} // STOP 4 OMIT

// START main OMIT
int main()
{
  switch1();
  switch2();
  switch3();
  switch4(); puts("");
}
// STOP main OMIT
