# C

## Compiler
`gcc -std=c17 -Wall -Wextra -pedantic <file.c>`
- `gcc -S hello.c`


### Preprocessor
El primer programa que se ejecuta es el preprocesador, que es un procesador de macros (un tipo de editor de texto automático) que maneja todas las líneas que comienzan con #.
- `gcc -E hello.c > hello.i`.

### The main *function*
- C define dos posibles entornos de ejecución: *freestanding*-independiente y *hosted*-alojado. ???
- `int`: tipo entero con signo, que se puede utilizar para representar valores *enteros positivos* y *negativos*, así como *cero*.
- `void`: no acepta argumentos.
- `puts` se declara en `<stdio.h>`: escribe un argumento de string en `stdout`??? , que normalmente representa la consola
- `EXIT_SECESS` se define en `<stdlib.h>`: es una macro similar a un objeto que comúnmente se expande a 0 y normalmente se define como: `#define EXIT_SUCCESS 0`
- La función `put` devuelve el valor de la macro `EOF` (un entero negativo) si se produce un **error** de escritura; de lo contrario, devuelve un valor entero no negativo.

### Assembler
- `gcc -Wall -Wextra -g -Wextra -Wa, -a=hello.lst -c hello.c`

### Logic Operators

- **`&&`** – logical **AND** operator
- **`||`** – logical **OR** operator
- **`!`** – unary **negation** operator

### Increment and Decrement Operators

- `++a` – **pre**fix **++** operator >> (  ****)
- `**a++**` – **post**fix **++** operator >> ( **`a = a + 1`** )
- `**—-a**` – **pre**fix **--** operator >> (  ****)
- `**a--**` – **post**fix **--** operator >> ( **`a = a - 1`** )

### Operator Precedence

*Una lista de algunos de los operadores ordenados por precedencia, de mayor a menor:*

- `++` ****`--` ***post***fix or ***pre***fix *increment* and *decrement*
- `()` ***function*** call operator
- `[]` ***array*** subscript
- `.` structure member access *- acceso a miembros de la estructura*
- `**->**` structure member access through a pointer *- acceso a miembros de la estructura a través de un puntero*
- `+` ****`-` unary plus and minus
- `!` logical ***NOT***
- **(**`type_name`**)** cast operator *- operador de reparto*
- **`*`** dereference operator *- operador de desreferencia*
- **`&`** address-of  *- direccion-de*
- **`*` `/` `%`** multiplication, division, and remainder
- **`+` `-`** addition and subtraction
- **`<<` `>>`** ***bitwise*** left shift and right shift *- desplazamiento a la izquierda y a la derecha a nivel de bits*
- **`<` `<=`** relational operators
- **`>` `>=`** relational operators
- **`==` `!=`** equality operators
- **`&&`** logical ***AND***
- **`||`** logical ***OR***
- **`? :`** ***ternary conditional*** operator *- operador condicional ternario*
- **`=`** ***assignment*** operator *- operador de asignación*
- **`+=` `-=`** ***compound*** assignments *- asignaciones compuestas*

### Security
- Tenga cuidado de no pasar datos proporcionados por el usuario como parte del primer argumento a la función `printf`, ya que hacerlo puede resultar en una vulnerabilidad de seguridad de *formatted output* (Seacord 2013).???