package fibonacci

import "testing"

func TestRecur(t *testing.T) {
  var tests = []struct {
       n, fn uint32
  }{
    {6,8}, 
    {5,5},
    {4,3},
    {3,2},
    {2,1},
    {1,1},
  }
  for _,v := range tests {
    got := Recur(v.n)
    if got != v.fn {
      t.Errorf("fibo(%d) == %d != %d", v.n, v.fn, got)
    }
  }
}
