#include <github.com/kranfix/ejemcpp/factorial/factorial.h>
//#include "factorial.h"
#include <cstdio>

const uint64 A = 11;
const uint64 B = 15;

void TestDirec()
{
  using namespace factorial;
  int i = 0;
  for (; i < A; i++)
    printf("%d ",Direc(i));
  printf("\n");
  for(; i < B; i++)
    printf("%d ",Direc(i));
  printf("\n");
}

void TestRecur()
{
  using namespace factorial;
  int i = 0;
  for (; i < A; i++)
    printf("%d ",Recur(i));
  printf("\n");
  for(; i < B; i++)
    printf("%d ",Recur(i));
  printf("\n");
}

void TestStatic()
{
  using namespace factorial;
  uint64 i = 0;
  for (; i < A; i++)
    printf("%d ", Static(i));
  printf("\n");
  for(; i < B; i++)
    printf("%d ",Static(i));
  printf("\n");
}

int main()
{
  TestDirec();
  TestRecur();
  TestStatic();
  return 0;
}
