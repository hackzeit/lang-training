package fibonacci

import "testing"

func TestStatic(t *testing.T) {
  var tests = []struct {
       n, fn uint32
  }{
    {6,8}, 
    {5,5},
    {4,3},
    {3,2},
    {2,1},
    {1,1},
    {7,13},
  }

  f := Static(7)
  for _,v := range tests {
    got := f(v.n)
    if got != v.fn {
      t.Errorf("fib(%d) == %d, wanted: %d", v.n, got, v.fn)
    }
  }
}
