// #include -> Preprocessor directives

#include <stdio.h>  // contains the declarations for C Standard I/O functions.
#include <stdlib.h>  // contains the declarations for general utility functions.

int main(void) {
    // printf("Julio Castillo\n");
    // return 0;

    // puts("Julio");  // con salto de linea
    printf("%s\n", "Hello World!!!");

    return EXIT_SUCCESS;  // macro
}

// int main(void) {
//     // verifica si la llamada put devuelve el valor EOF
//     if(puts("123") == EOF) {
//         return EXIT_FAILURE;
//     }
//     return EXIT_SUCCESS;
// }