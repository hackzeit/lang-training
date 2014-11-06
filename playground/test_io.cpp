#include <iostream>
#include <stdio.h>

using namespace std;

// Se declara la  existencia de las
// funciones con el fin de poder usarlas
// desde main() (Problema dado en C++)
void fun1();
int fun2();
void fun3();
void fun4();
void fun5();

int main()
{
    fun5();
    //int a = fun2();
    //cout << a << '\n'; //endl;
    return 0;
}

void fun5() {
  char string [256];
  printf ("Ingrese su direccion: ");
  gets (string);
  printf ("Tu direccion es:");
  puts(string);
  printf("\n");
}

void fun4()
{
  int c;
  puts ("Ingrese texto. Incluya un punto ('.') para terminar el texto:");
  do {
    c = getchar();
     //putchar (c);
   } while (c != '.');
}

void fun3() {
  /* ejemplos de printf */
  printf("EJEMPLO DE LOS TIPOS DE VARIABLES\n\n");
  printf ("Variables de Caracteres(char): %c %c \n", 'a', 65);
  printf ("Variables Decimales (int ylong int): %d %ld\n", 1977, 650000L);
  printf ("Precedido de espacios: %10d \n", 1977); //Se agregan por la izquierda.
  printf ("Precedido de zeros: %010d \n", 1977); // Se agregan ceros por la izquierda.
  printf ("Algunas bases diferentes: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
  printf ("Variables floats: %4.2f  %+.0e %E \n", 3.1416, 3.1416, 3.1416);
  printf ("Cortando Ancho: %*d \n", 5, 10); // Al 5to espacio se escribe la variable.
}

int fun2(){
    // TADA!! Se puede declarar
    // y asignar al mismo tiempo
    int a = 5, b = 2;

    a = a + 1;
    int result = a - b;
    return result;
}

void fun1() {
    cout << "Hola CCPP-UNI!" << endl;
}
