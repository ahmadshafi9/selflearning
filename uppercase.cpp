#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[50];
    printf("Enter your name: ");
    scanf("%49s", s);  // Removed trailing space and added size limit to prevent overflow

    // Iterate over the string and print lowercase letters
    for (int i = 0, n = strlen(s); i < n; i++) {
        // Check if the character is lowercase
        if (s[i] >= 'a' && s[i] <= 'z') 
        {
            printf("%c", toupper (s[i]));
        }
        
    }

    // Print a newline after output
    printf("\n");

    return 0;
}
