#include "complejos.h"

//struct complejo sum(struct complejo a, struct complejo b)
cmplx sum(cmplx a, cmplx b)
{
    a.real += b.real;
    a.imag += b.imag;
    return a;
}

//struct complejo res(struct complejo a, struct complejo b)
cmplx res(cmplx a, cmplx b)
{
    a.real -= b.real;
    a.imag -= b.imag;
    return a;
}

//struct complejo mul(struct complejo a, struct complejo b)
cmplx mul(cmplx a, cmplx b)
{
    //struct complejo r;
    cmplx r;
    r.real = a.real * b.real - a.imag * b.imag;
    r.imag = a.real * b.imag + a.imag * b.real;
    return r;
}

//struct complejo div(struct complejo a, struct complejo b)
cmplx div(cmplx a, cmplx b)
{
    cmplx r;
    double mod2 = b.real * b.real + b.imag * b.imag;

    r.real = a.real * b.real + a.imag * b.imag;
    r.real /= mod2;
    r.imag = - a.real * b.imag + a.imag * b.real;
    r.imag /= mod2;

    return r;
}
