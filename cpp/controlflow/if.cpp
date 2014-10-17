#include <iostream>

void if1()
{ // START if1 OMIT
  std::cout << "Iniciando prueba de if ..." << std::endl;
  int a = 4;
  if ( a == 4 ) {  std::cout << "valor de a == 4" << std::endl; } // HL
  std::cout << "Prueba de if terminada" << std::endl;
} // STOP if1 OMIT

void if2()
{ // START if2 OMIT
  std::cout << "Iniciando prueba de if - else ..." << std::endl;
  int a = 4;
  if ( a == 4 )  std::cout << "valor de a == 4" << std::endl;
  else { std::cout << "valor de a != 4" << std::endl; } // HL
  std::cout << "Prueba de if - else terminada" << std::endl;
} // STOP if2 OMIT

void if3()
{ // START if3 OMIT
  std::cout << "Iniciando prueba de if - else if - else ..." << std::endl;
  int a = 4;
  if ( a == 4 )
    std::cout << "valor de a == 4" << std::endl;
  else if ( a == 5) // HL
    std::cout << "valor de a == 5" << std::endl; // HL
  else
    std::cout << "valor de a != 4 y a != 5" << std::endl;
  std::cout << "Prueba de if - else if - else terminada" << std::endl;
} // STOP if3 OMIT

// START main OMIT
int main(){
  if1(); std::cout << std::endl;
  if2(); std::cout << std::endl;
  if3(); std::cout << std::endl;
}
// STOP main OMIT
