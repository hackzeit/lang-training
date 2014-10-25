#include <iostream>

void for1() { // OMIT
  for (int i = 10; i > 0; i++) {
    std::cout << i << ", ";
    if (i == 4) break;
  }
  // Salida: 10, 9, 8, 7, 6, 5, 4,
} // OMIT

void for2() { // OMIT
  for (int i = 10; i > 0; i++) {
    if (i == 4) continue;
    std::cout << i << ", ";
  }
  // Salida: 10, 9, 8, 7, 6, 5, 3, 2, 1,
} // OMIT

void for3(){ // OMIT
  charg str[] = "Hola!"; // ['H','o','l','a','!',\0]
  for (int i = 0; i < 6; i++) 
    std::cout << "[" << str[i] << "]";
  std::cout << '\n';
  // Salida: [H][o][l][a][!][]
} // OMIT

void for4(){ //OMIT
  charg str[] = "Hola!"; // ['H','o','l','a','!',\0]
  for (char c : str) 
    std::cout << "[" << c << "]";
  std::cout << '\n';
  // Salida: [H][o][l][a][!][]
} // OMIT

void for5(){ // OMIT
  string str {"Hola!"};
  for (char c : str) // for (auto c : str)
    std::cout << "[" << c << "]";
  std::cout << '\n';
  // Salida: [H][o][l][a][!]
} //OMIT
