#include "complejos.hpp"
#include <iostream>


cmplx sum(cmplx a, cmplx b)
{
    a.real += b.real;
    a.imag += a.imag;
    return a;
}

cmplx sum(cmplx a, double b)
{
    a.real += b;
    return a;
}

void cmplx_ejm()
{
    cmplx x = {1, 3};
    cmplx y = sum(x, 5);
    cmplx z = sum(y, cmplx({-2,6}) );
    using namespace std;
    cout<< x.real <<" "<<x.imag<<endl;
    cout<< y.real <<" "<<y.imag<<endl;
    cout<< z.real <<" "<<z.imag<<endl;
}
