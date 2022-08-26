#include <stdio.h>

void swap(int a, int b) { //21 - 17
    int t = a;  // t = 21
    a = b; // a = 17
    b = t; // b = 21
    printf("swap: a = %d, b = %d\n", a, b);
}

void swap2(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
    // return;
    printf("swap2: a = %d, b = %d\n", *pa, *pb);
}

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
    printf("main: a = %d, b = %d\n", a, b);

    swap(a, b);
    swap2(&a, &b);

    return 0;
}