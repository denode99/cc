#include <stdio.h>

/* Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999 */

int main(void) {
    char name[] = "Julio Castillo";
    char date[] = "July 14, 1992";
    int mobile = 982233342;
    int code_country = 51;

    printf("Name    : %s\n", name);
    printf("DOB     : %s\n", date);
    printf("Mobile  : +%d-%d\n", code_country, mobile);

    return 0;
}