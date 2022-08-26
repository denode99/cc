#include <stdio.h>

void swap(int *a, int *b) { // a y b "apuntan" a -> *a y *b
    int t;
    t = *a; // "accedemos" a *a
    *a = *b;
    *b = t; // "guarda" en *b el contenido de t
}
// void swap(int a, int b) { // crea una copia de a y b
//     int t;
//     t = a;
//     a = b;
//     b = t;
// }

int main(void) {
    int a = 10;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);

    // swap(a, b); // parametros de tipos "enteros"
    swap(&a, &b);  // paramentros de tipos "punteros"
    
    printf("a = %d, b = %d\n", a, b);
    return 0;
}