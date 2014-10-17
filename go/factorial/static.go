package factorial

// Esta funcion crea un array de N+1 elementos, cuyos valores son solo
// accesibles desde la funcion "mifact" que se muesta en el modo de uso.
// Dicho Array contendra los valores 0!, 1!, 2!, ..., N! (N+1 elementos)
//
// Modo de uso:
//   mifact = Static(8) // Desde dentro de este package
//   // Desde fuera del package factorial usar:
//   // mifact = factorial.Static(8)
//   k := mifact(4)     // k == 24
//   k = mifact(8)      // k == 40320
//   k = mifact(-1)     // Error: -1 no es uint64
//   k = mifact(9)      // Error: 9 es mayor a 8 (Static(8))

func Static(N uint64) func(n uint64) uint64 {
  F := make([]uint64, N+1) // Array de N+1 elementos que contienen los factoriales
  F[0], F[1] = 1, 1    // Inicializando L[0] = L[1] = 1
  k := uint64(2) //numero de elementos llenos en L
  return func(n uint64) uint64 {
    for ; k <= n ; k++ {
      F[k] = F[k-1] *  k
    }
    return F[n]
  }
}
