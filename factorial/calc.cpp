#include "factorial.h"

uint64 factorial::Direc(uint64 n)
{
    uint64 f = 1;
    for(uint64 i = 2; i <= n; i++)
        f *= i;
    return f;
}

uint64 factorial::Recur(uint64 n)
{
    if(n < 2) return 1;
    return n * Recur(n-1);
}
