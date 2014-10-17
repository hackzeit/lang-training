package factorial

import "testing"

func TestStatic(t *testing.T) {
  tests := [9]uint64{1,1,2,6,24,120,720,5040,40320}
  f := Static(8)
  for i := uint64(0); i < 9; i++ {
    if got := f(i); got != tests[i] {
      t.Errorf("f(%d) == %d != %d, %d",i,tests[i],got)
    }
  }
}
