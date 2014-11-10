#ifndef COMPLEJOS_H
#define COMPLEJOS_H

struct cmplx {
  double real;
  double imag;
};

#ifndef __cplusplus
  typedef struct cmplx cmplx;
#endif // __cplusplus

/*
OBS: en vez de declarar struct cmplx,
     declarar compo struct complejo.
struct complejo sum(struct complejo, struct complejo); //suma
struct complejo mul(struct complejo, struct complejo); //multiplicacion
struct complejo div(struct complejo, struct complejo); //division
struct complejo res(struct complejo, struct complejo); //resta
*/

cmplx sum(cmplx, cmplx); //suma
cmplx res(cmplx, cmplx); //resta
cmplx mul(cmplx, cmplx); //multiplicacion
cmplx div(cmplx, cmplx); //division

#endif // COMPLEJOS_H
