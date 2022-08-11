// #include -> Preprocessor directives

#include <stdio.h>  // contains the declarations for C Standard I/O functions.
#include <stdlib.h>  // contains the declarations for general utility functions.

int main(void) {  // compound statement

    // declares two integer objects with initial values.
    int a = 1;  // a -> identifier
    int b = 2;

    printf("%s\n", "Hello World!!!");  // puts("Julio");  // con salto de linea
    printf("main: a = %d, b = %d", a, b);

    // return EXIT_SUCCESS;  // macro
    return 0;
}

// int main(void) {
//     // verifica si la llamada put devuelve el valor EOF
//     if(puts("123") == EOF) {
//         return EXIT_FAILURE;
//     }
//     return EXIT_SUCCESS;
// }