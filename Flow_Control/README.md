# Control de Flujo

## IF

La sintaxis de la sentencia `if` en programación C es:

```c
if (test expression) 
{
   // code
}
```


La `if`declaración puede tener un `else`bloque opcional. La sintaxis de la `if..else`declaración es:

```c
if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}
```

## For

En programación, se utiliza un bucle para repetir un bloque de código hasta que se cumpla la condición especificada.

La programación en C tiene tres tipos de bucles:

1. for loop
2. while loop
3. do...while loop

Aprenderemos sobre `for`el bucle en este tutorial. En el próximo tutorial, aprenderemos sobre `while`el `do...while`bucle.

```c
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

### ¿Cómo funciona el bucle for?

- La declaración de inicialización se ejecuta solo una vez.
- Luego, se evalúa la expresión de prueba. Si la expresión de prueba se evalúa como falsa, el `for`ciclo finaliza.
- Sin embargo, si la expresión de prueba se evalúa como verdadera, se ejecutan las declaraciones dentro del cuerpo del `for`bucle y se actualiza la expresión de actualización.
- Nuevamente se evalúa la expresión de prueba.

## While

La sintaxis del `while`bucle es:

```c
while (testExpression) {
  // the body of the loop 
}
```

### ¿Cómo funciona el bucle while?

- El `while`bucle evalúa el `testExpression`interior de los paréntesis `()`.
- Si  `testExpression`es **verdadero**`while` , se ejecutan las declaraciones dentro del cuerpo del bucle. Luego, `testExpression`se evalúa nuevamente.
- El proceso continúa hasta que `testExpression`se evalúa como **falso** .
- Si  `testExpression`es **falso** , el ciclo termina (termina).

## C break and continue

La declaración break finaliza el ciclo inmediatamente cuando se encuentra. Su sintaxis es:

```c
break;
```

La declaración break casi siempre se usa con `if...else`una declaración dentro del bucle.

## C switch Statement

La declaración de cambio nos permite ejecutar un bloque de código entre muchas alternativas.

Puedes hacer lo mismo con la `if...else..if`escalera. Sin embargo, la sintaxis de la `switch`declaración es mucho más fácil de leer y escribir.

```c
switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

Elexpresiónse evalúa una vez y se compara con los valores de cadacasoetiqueta.

- Si hay una coincidencia, se ejecutan las declaraciones correspondientes después de la etiqueta coincidente. Por ejemplo, si el valor de la expresión es igual aconstante2, las declaraciones posteriores `case constant2:`se ejecutan hasta que `break`se encuentra.
- Si no hay coincidencia, se ejecutan las declaraciones predeterminadas.
