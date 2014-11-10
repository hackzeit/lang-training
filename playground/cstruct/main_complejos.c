#include <stdio.h>
#include "complejos.h"

int main(void)
{
    /*struct complejo x  = {1.0, 2.0};
    struct complejo y = {3, 5.5};
    struct complejo z = sum(x,y);*/
    cmplx x  = {1.0, 2.0};
    cmplx y = {3, 5.5};
    cmplx z = sum(x,y);
    printf("z = %f + %fj\n",z.real, z.imag);

    return 0;
}
