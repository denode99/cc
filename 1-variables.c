#include <stdio.h>

void swap(int, int);

int main(void) {

    /* variables multiples
    char *src, c;
        // *src -> type of `char *`
        // c -> type of `char`
    
    int x, y[5];
        // x -> type `int`
        // y[5] -> is an array of 5 elements of type `int`

    int m[12], n[15][3], o[21];
        // n[15][3] -> is an array of 15 arrays of 3 elements of type `int`
     */

    int a = 21;
    int b = 17;

    swap(a, b);

    printf("main: a = %d, b = %d", a, b);

    return 0;
}