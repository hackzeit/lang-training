package factorial

func Recur(n uint64) uint64 {
  if n < 2 { return 1}
  return n * Recur(n-1)
}
