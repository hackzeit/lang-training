#ifndef COMPLEJOS_H
#define COMPLEJOS_H

struct cmplx {
    double real;
    double imag;
};

cmplx sum(cmplx, cmplx);
cmplx sum(cmplx, double);
void cmplx_ejm();

#endif // COMPLEJOS_H
