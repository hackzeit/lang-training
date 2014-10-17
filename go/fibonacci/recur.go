package fibonacci

func Recur(n uint32) uint32 {
  if n < 3 { return 1}
  return Recur(n-2) + Recur(n-1)
}
