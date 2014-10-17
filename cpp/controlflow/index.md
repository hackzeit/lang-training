Sentencias y control de flujo
=============================
En secciones anteriores hemos visto que las instrucciones se ejecutan en el
mismo orden en el que aparecen. Pero un programa no solo se limita a seguir
una secuencias de pasos fija.

Un programa debe tener la capaciadad de repetir segmentos de código, o tomar
decisiones y bifurcarse (hacer saltos) cuando se le sea especificado o bajo
ciertas circunstancias. Para este propósito, C/C++ brinda sentencias para el
control de flujo.

Muchas de las sentencias de control de flujo explicadas en esta sección
requieren un (sub)conjunto genérico como parte de la sintaxis. Estas
sentencias podrían ser una de ambas:
- Una sentencia simple.
- Sentencias compuestas.

Adicionalmente, las sentencias de control se pueden categorizar en 3 categorías:
- Sentencias de decisión(if-else y switch-case.md).
- Sentencias de iteración (while, do-while y for).
- Sentencias de salto (goto, break y continue).

# Sentencia simple
Son sentencias simple que terminan en punto y coma (`;`).

Ejemplo:
- La declaración una variable: `int a;`
- Llamada a una función: `int N = factorial(5);`

# Sentencias compuestas
Es un grupo de sentencias simples (cada una con su propio punto y coma)
limitadas por llaves(`{}`).

Ejemplo:
```
{ sentencia1; sentencia2; sentencia3; }
```

# Sentencias de control
El orden en el que veremos las sentencias de control son:
- [if-else](if_else.md)
- [switch-case](switch_case.md)
- [goto](goto.md)
- [while](while.md)
- [do-while](do_while.md)
- [for, break y continue](for.md)
