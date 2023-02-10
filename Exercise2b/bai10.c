#include <stdio.h>

int main() {
    int n, temp = 0, original;
    printf("Enter number: \n");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }

    if (temp == original) {
        printf("%d is a palindrome number\n", original);
    } else {
        printf("%d is not a palindrome number\n", original);
    }

    return 0;
}
