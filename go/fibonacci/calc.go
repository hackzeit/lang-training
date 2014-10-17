package fibonacci

func Calc(n uint32) uint32 {
  var a, b uint32 = 0, 1
  for i := uint32(1); i < n; i++ {
    a, b = b, a+b
  }
  return b
}
