void for1(){ // OMIT
  int f = 1;
  for( int i = 2; i <= 10; i++)
    f *= i;
  std::cout << "factorial: 10! = " << f << std::endl;
} // OMIT

void for2(){ // OMIT
  string str {"Hola!"};
  for (char c : str) // for (auto c : str)
  {
    std::cout << "[" << c << "]";
  }
  std::cout << '\n';
} //OMI


void for3(){ //OMIT
  charg str[] = "Hola!"; // ['H','o','l','a','!',\0]
  for (char c : str) 
  {
    std::cout << "[" << c << "]";
  }
  std::cout << '\n';
} // OMIT
