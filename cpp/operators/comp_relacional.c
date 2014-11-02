void comp() { // OMIT
  bool v;
  int a = 2, b = 3, c = 6;
  v = (7 == 5);     // v:false
  v = (b != 2);     // v:true
  V = (a == 5)      // v:false
  V = ((b=2) == a)  // v:true
} // OMIT

void relacional() { // OMIT
  bool v;
  int a = 2, b = 3, c = 6;
  v = (5 > 4);      // v:true
  v = (6 >= 6);     // v:true
  v = (5 < 5);      // v:false
  v = (a*b >= c);   // v:true, pues (2*3 >= 6)
  v = (b+4 > a*c);  // v:false, pues (3+4 > 2*6)
} // OMIT

int main() {
  return 0;
}
