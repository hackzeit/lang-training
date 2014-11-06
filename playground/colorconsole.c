#include <stdio.h>

#define BRIGHT 1
#define RED 31
#define BG_BLACK 40

int main(){
  printf("Bienvenidos a Introduccion a C/C++ para sistemas embebidos:\n");
  
  printf("%c[%d;%d;%dmHello World\n", 0x1B, BRIGHT,RED,BG_BLACK);
  printf("%c[%d;%dmHello World%c[%dm\n",27,7,33,27,0);
  return 0;

}

/*
Text attributes
       0    All attributes off
       1    Bold on
       4    Underscore (on monochrome display adapter only)
       5    Blink on
       7    Reverse video on
       8    Concealed on

    Foreground colors
       30    Black
       31    Red
       32    Green
       33    Yellow
       34    Blue
       35    Magenta
       36    Cyan
       37    White

    Background colors
       40    Black
       41    Red
       42    Green
       43    Yellow
       44    Blue
       45    Magenta
       46    Cyan
       47    White
*/
