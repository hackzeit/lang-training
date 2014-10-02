#include "factorial.h"

uint64 factorial::Static(uint64 n)
{
  static uint64 k = 3;
  static std::vector<uint64> f {1,1,2};

  for(; k <= n; k++)
    f.push_back(k * f[k-1]);
  return f[n];
}
