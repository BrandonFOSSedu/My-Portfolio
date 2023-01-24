#include <stdio.h>

int main() {
    int a[8]; // Declares integer array with 8 elements
              // a[0], a[1], ..., a[7]
    
    for(int i = 0; i < 8; i++) {
        printf("Enter value for a[%i] : ", i);
        scanf("%i", &a[i] );
    }

    // for ( index variable; test condition; increment)
    for(int i = 0; i < 8; i++)
        printf("a[%i] = %i\n", i,  a[i]);

    return 0;
}


