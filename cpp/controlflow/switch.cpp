#include <iostream>

void switch1()
{ // START 1 OMIT
  int x = 2;
  switch(x) {
    case 1:
      std::cout << "valor de x == 1";
      break;
    case 2:
      std::cout << "valor de x == 2"; 
  }
} // STOP 1 OMIT

void switch2()
{ // START 2 OMIT
  int x = 6;
  switch(x) {
    case 1:
      std::cout << "valor de x == 1";
      break;
    case 2:
      std::cout << "valor de x == 2"; 
      break;
    default:
      std::cout << "valor de x != 1 y x != 2";
      break;
  }
} // STOP 2 OMIT

void switch3()
{ // START 3 OMIT
  int x = 3;
  switch(x) {
    case 6:
      std::cout << "x = 6\n";
      break;
    case 5:
      std::cout << "x == 5\n";
    case 4:
      std::cout << "x >= 4\n";
    case 3:
      std::cout << "x >= 3\n";
      break;
    default:
      std::cout << "x < 3 o x > 6\n";
      break; // El ultimo 'break;' es innecesario
  }
} // STOP 3 OMIT

void switch4()
{ // START 4 OMIT
  int x = 3;
  switch(x) {
    case 6:
      std::cout << "x = 6\n";
      break;
    case 5:
    case 4:
    case 3:
      std::cout << "x es 3, 4 o 5\n";
      break;
    default:
      std::cout << "x < 3 o x > 6\n";
  }
} // STOP 4 OMIT

// START main OMIT
int main()
{
  switch1(); std::cout << std::endl;
  switch2(); std::cout << std::endl;
  switch3(); std::cout << std::endl;
  switch4(); std::cout << std::endl;
}
// STOP main OMIT
