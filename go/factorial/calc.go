package factorial

func Calc(n uint64) uint64 {
  f := uint64(1)
  for  i := uint64(2); i <= n; i++ {
    f = f * i;
  }
  return f
}
