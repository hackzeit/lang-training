#include<iostream>

void goto1() { // START 1 OMIT
  int x = 5;
  if(x == 6) goto case6;
  else if(x == 5) goto case5;
  else if(x == 4) goto case4;
  else if(x == 3) goto case3;
  else goto defecto;
	
  case6: std::cout << "x == 6\n";
         goto fin;
  case5: std::cout << "x == 5\n";
  case4: std::cout << "x >= 4\n";
  case3: std::cout << "x >= 3\n";
         goto fin;
  defecto: std::cout << "x < 3 o x > 6\n";
  fin: // codigo que siga
  return; // STOP 1 OMIT
}

void goto2() { // START 2 OMIT
  int x = 4;
  if(x == 6) {
    std::cout << "x == 6\n";
  } else if(x == 5) {
    std::cout << "x == 5\n";
    goto case4;
  }  else if(x == 4) {
    case4: std::cout << "x >= 4\n";
    goto case3;
  } else if(x == 3) {
    case3: std::cout << "x >= 3\n";
  } else {
    std::cout << "x < 3 o x > 6\n";
  }
  // STOP 2 OMIT
  return;	
}

int main() {
  //goto1();
  goto2();
}
