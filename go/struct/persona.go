package persona


type persona struct {
  nombre string
  apellido string
  dni uint32
}

func (p *persona) Nombre() string{
  return p.nombre
}

func (p *persona) SetNombre(n string) {
  p.nombre = n
}

func (p *persona) Apellido() string{
  return p.apellido
}

func (p *persona) SetApellido(a string) {
  p.apellido = a
}

func (p *persona) DNI() uint32{
  return p.dni
}

func (p *persona) SetDNI(d uint32) {
  p.dni = d
}
