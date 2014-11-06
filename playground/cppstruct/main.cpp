#include <iostream>
#include <string>
#include "complejos.hpp"

using namespace std;

//#include <stdio.h>

int mcd(int, int);
void ejem_for();

void ejem_array();
inline void imprimir(int x);

template<class T1, class T2>
inline T1 foo(T1 a, T2 b)
{
    return a + (T1)b;
    // retturn a + T1(b);
}

int main ()
{
  //int a = 0, b = 5;
  //cout << "mcd(" << a << "," << b;
  //cout << ") = " << mcd(a,b) << endl;

  //cmplx_ejm();
  ejem_for();
  //ejem_array();

  /*int m = 3;
  imprimir(m);
  imprimir(4);*/

  printf("%d %f\n",foo(10, 12.5), foo(12.5, 10) );
  printf("%f\n", (float)foo<int, char>(12,'A') );
  return 0;
}

void ejem_array()
{
    int mat[5][6];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6 ;j++)
        {
            mat[i][j] = i + j;
            printf("%d ", mat[i][j]);
        }
        puts("");
    }
}

int mcd(int m, int n)
{
    return (n == 0)? m : mcd(n,m%n);
}

void ejem_for()
{
    for(auto c: "Hola que hace?" )
    {
        //if( c != ' ')
        cout<<"[";
            cout << c;
        //else
            cout <<"]\n";
    }
}

#define str(x) #x
inline int max( int a, int b)
{
    return (a > b) ? a : b;
}

inline void imprimir(int x)
{
    printf("%s = %d\n",str(x),x);
}
