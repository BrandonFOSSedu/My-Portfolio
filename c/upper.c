#include <stdio.h>

int main() {

    char str[20];   // 20 character array

    printf("Enter a word: "); // Prompt user for input
    scanf("%s", &str);

    for(int i = 0; str[i] != 0 ; i++ ) {   // Loop through string and turn lowercase uppercase
        if(str[i] >= 'a' && str[i] <= 'z')  // Change lower to uppercase
            str[i] = str[i] - 32;
    }

    printf("Your string is %s\n", str);

    return 0;
} 
