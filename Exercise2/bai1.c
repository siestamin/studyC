#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("You entered a positive number: %d\n", num);
    } else {
        printf("This statement is always executed.\n");

    }
    
    return 0;
}
