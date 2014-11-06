#ifndef COMPLEJOS_H
#define COMPLEJOS_H


/* Solo para c++:
 * struct cmplx {
 *  double real;
 *  double imag;
 * };
 */
struct complejo {
    double real;
    double imag;
};

typedef struct complejo cmplx;


/*
struct complejo sum(struct complejo, struct complejo); //suma
struct complejo mul(struct complejo, struct complejo); //multiplicacion
struct complejo div(struct complejo, struct complejo); //division
struct complejo res(struct complejo, struct complejo); //resta
*/

cmplx sum(cmplx, cmplx); //suma
cmplx mul(cmplx, cmplx); //multiplicacion
cmplx div(cmplx, cmplx); //division
cmplx res(cmplx, cmplx); //resta

#endif // COMPLEJOS_H
