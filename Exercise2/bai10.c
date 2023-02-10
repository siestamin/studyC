#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Enter the third integer: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("The integers in ascending order are: %d %d %d\n", a, b, c);
    return 0;
}
