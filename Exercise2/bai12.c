#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if (isalpha(input)) {
        printf("Alphabet\n");
    } else if (isdigit(input)) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}
