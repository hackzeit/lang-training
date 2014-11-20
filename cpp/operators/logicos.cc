#include <stdio.h>

void logic_not() { // OMIT
  bool V;
  V = !true;     //V:false
  V = !false;    //V:true 
  V = !(6 >= 2); //V:flase
  V = !(4 < 3);  //V:true
} // OMIT

void logic_and() { // OMIT
  bool V; // OMIT
  V = true && true;   //V:true    // HL
  V = true && false;  //V:false
  V = false && true;  //V:false
  V = false && false; //V:false
} // OMIT

void logic_or() { // OMIT
  bool V; //OMIT
  V = true || true;        //V:true
  V = true || false;        //V:true
  V = false || true;        //V:true
  V = false || false;        //V:false // HL
} // OMIT
