## Started

```c
#include <stdio.h>
int main(){
printf("Hello world!");
return 0;
}
```

 `#include <stdio.h>` es una **biblioteca de archivos de encabezado** que nos permite trabajar con funciones de entrada y salida, como `printf()`(usada en la línea 4). Los archivos de encabezado agregan funcionalidad a los programas C.
 
Otra cosa que siempre aparece en un programa C es `main()`. Esto se llama **función** . `{}`Se ejecutará cualquier código dentro de sus llaves .

`printf()` es una **función** utilizada para enviar/imprimir texto en la pantalla. En nuestro ejemplo, mostrará "¡Hola mundo!".

`return 0` finaliza la `main()`función.

## Output

Cuando trabaje con texto, éste debe ir entre comillas dobles "".  
  
Si olvida las comillas dobles, se produce un error:

```c
printf("This sentence will work!");
```

```c
printf(This sentence will produce an error.);
```

## Variables y Constantes

### Variables

```c
int numer_int=7;
double number_double= 5.5;
char name='a';
```


### constants

```c
const double pi=3.14;
pi =2.3 //error
```

### Strings

```c
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline
```
### Secuencia de Escape 

|Escape Sequences|Character|
|---|---|
|`\b`|Backspace|
|`\f`|Form feed|
|`\n`|Newline|
|`\r`|Return|
|`\t`|Horizontal tab|
|`\v`|Vertical tab|
|`\\`|Backslash|
|`\'`|Single quotation mark|
|`\"`|Double quotation mark|
|`\?`|Question mark|
|`\0`|Null character|

## Tipos de datos

|Type|Size (bytes)|Format Specifier|
|---|---|---|
|`int`|at least 2, usually 4|`%d`, `%i`|
|`char`|1|`%c`|
|`float`|4|`%f`|
|`double`|8|`%lf`|
|`short int`|2 usually|`%hd`|
|`unsigned int`|at least 2, usually 4|`%u`|
|`long int`|at least 4, usually 8|`%ld`, `%li`|
|`long long int`|at least 8|`%lld`, `%lli`|
|`unsigned long int`|at least 4|`%lu`|
|`unsigned long long int`|at least 8|`%llu`|
|`signed char`|1|`%c`|
|`unsigned char`|1|`%c`|
|`long double`|at least 10, usually 12 or 16|`%Lf`|
## Operators

|Operator|Meaning of Operator|
|---|---|
|+|addition or unary plus|
|-|subtraction or unary minus|
|*|multiplication|
|/|division|
|%|remainder after division (modulo division)|

## C Input

En la programación C, `scanf()`es una de las funciones más utilizadas para recibir información del usuario. La `scanf()`función lee entradas formateadas desde la entrada estándar, como los teclados.

```c
#include <stdio.h>
int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d",testInteger);
    return 0;
}
```