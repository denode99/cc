#include <stdio.h>

int main(void) {
    __int8 a_lower = 97;
    __int8 z_lower = 122;
    __int8 A_upper = 65;
    __int8 Z_upper = 90;

    for ( ; a_lower < (z_lower + 1) ; a_lower++) {
        printf("%c", a_lower);
        // printf("%c-%d,", a_lower, a_lower);
    }
    printf("\n");
    for ( ; A_upper < (Z_upper + 1) ; A_upper++) {
        printf("%c", A_upper);
    }

    return 0;
}