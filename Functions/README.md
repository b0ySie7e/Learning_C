# Functions

### Funciones de biblioteca estándar

Las funciones de biblioteca estándar son funciones integradas en la programación en C.

Estas funciones se definen en archivos de encabezado. Por ejemplo,

- Es `printf()`una función de biblioteca estándar para enviar resultados formateados a la pantalla (mostrar resultados en la pantalla). Esta función está definida en el  `stdio.h` archivo de encabezado.  
    Por lo tanto, para usar la `printf()`función, debemos incluir el `stdio.h`archivo de encabezado usando `#include <stdio.h>`.
- La `sqrt()`función calcula la raíz cuadrada de un número. La función está definida en el `math.h`archivo de encabezado.

```c
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}
```

La ejecución de un programa en C comienza desde la `main()`función.

Cuando el compilador encuentra `functionName();`, el control del programa salta a

```c
 void functionName()
```

Y el compilador comienza a ejecutar los códigos internos `functionName()`.

El control del programa vuelve a la `main()`función una vez que se ejecuta el código dentro de la definición de la función.

## Tipos de Funciones
### 1. No Argument Passed and No Return Value

```c
#include <stdio.h>

void checkPrimeNumber();

int main() {
  checkPrimeNumber();    // argument is not passed
  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeNumber() {
  int n, i, flag = 0;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);
}
```

La `checkPrimeNumber()`función recibe información del usuario, verifica si es un número primo o no y lo muestra en la pantalla.

Los paréntesis vacíos dentro `checkPrimeNumber();`de la `main()`función indican que no se pasa ningún argumento a la función.

El tipo de retorno de la función es `void`. Por lo tanto, la función no devuelve ningún valor.

### 2.  No Arguments Passed But Returns a Value

```c
#include <stdio.h>
int getInteger();

int main() {

  int n, i, flag = 0;

  // no argument is passed
  n = getInteger();    

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }

  if (flag == 1)
    printf("%d is not a prime number.", n);
  else
    printf("%d is a prime number.", n);

  return 0;
}

// returns integer entered by the user
int getInteger() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  return n;
}

```

Los paréntesis vacíos en la `n = getInteger();`declaración indican que no se pasa ningún argumento a la función. Y el valor devuelto por la función se asigna anorte.

Aquí, la `getInteger()`función toma información del usuario y la devuelve. El código para comprobar si un número es primo o no está dentro de la `main()`función.
### 3. Argument Passed But No Return Value

Los paréntesis vacíos en la `n = getInteger();`declaración indican que no se pasa ningún argumento a la función. Y el valor devuelto por la función se asigna anorte.

Aquí, la `getInteger()`función toma información del usuario y la devuelve. El código para comprobar si un número es primo o no está dentro de la `main()`función.

```c
#include <stdio.h>
void checkPrimeAndDisplay(int n);

int main() {

  int n;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // n is passed to the function
  checkPrimeAndDisplay(n);

  return 0;
}

// return type is void meaning doesn't return any value
void checkPrimeAndDisplay(int n) {
  int i, flag = 0;

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    flag = 1;

  for(i = 2; i <= n/2; ++i) {
    if(n%i == 0){
      flag = 1;
      break;
    }
  }

  if(flag == 1)
    printf("%d is not a prime number.",n);
  else
    printf("%d is a prime number.", n);
}

```

El valor entero ingresado por el usuario se pasa a la `checkPrimeAndDisplay()`función.

Aquí, la `checkPrimeAndDisplay()`función verifica si el argumento pasado es un número primo o no y muestra el mensaje apropiado.

### 4. Argument Passed and Returns a Value

```c
#include <stdio.h>
int checkPrimeNumber(int n);

int main() {

  int n, flag;

  printf("Enter a positive integer: ");
  scanf("%d",&n);

  // n is passed to the checkPrimeNumber() function
  // the returned value is assigned to the flag variable
  flag = checkPrimeNumber(n);

  if(flag == 1)
    printf("%d is not a prime number",n);
  else
    printf("%d is a prime number",n);

  return 0;
}

// int is returned from the function
int checkPrimeNumber(int n) {

  // 0 and 1 are not prime numbers    
  if (n == 0 || n == 1)
    return 1;

  int i;

  for(i=2; i <= n/2; ++i) {
    if(n%i == 0)
      return 1;
  }

  return 0;
}

```

La entrada del usuario se pasa a la `checkPrimeNumber()`función.

La `checkPrimeNumber()`función comprueba si el argumento pasado es primo o no.

Si el argumento pasado es un número primo, la función devuelve **0** . Si el argumento pasado es un número no primo, la función devuelve **1** . El valor de retorno se asigna albanderavariable.

Dependiendo de sibanderaes **0** o **1** , se imprime un mensaje apropiado desde la `main()`función.

# Referencias
- [https://www.programiz.com/c-programming/types-user-defined-functions](https://www.programiz.com/c-programming/types-user-defined-functions)

- [https://sites.ualberta.ca/~ygu/courses/geoph624/codes/C.CheatSheet.pdf](https://sites.ualberta.ca/~ygu/courses/geoph624/codes/C.CheatSheet.pdf)

- [https://www.geeksforgeeks.org/c-programming-language/?ref=lbp](https://www.geeksforgeeks.org/c-programming-language/?ref=lbp)
