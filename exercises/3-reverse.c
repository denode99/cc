#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    char cc[3] = {'X', 'M', 'L'};

    int length = sizeof(cc);

    for (int i = 0; i <= length; length--) {
        printf("%c", cc[length]);
    }

    return 0;
}