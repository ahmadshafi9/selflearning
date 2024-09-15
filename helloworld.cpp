#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number); // %d is used for reading an integer, and &number is the address where the input will be stored

    printf("You entered: %d\n", number);


    
    
    return 0;
}
