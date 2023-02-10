#include <stdio.h>

int main() {
    int n, digit;
    int odd_digits_exist = 0;
    printf("nhập số nguyên dương\n ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 1) {
            odd_digits_exist = 1;
            printf("%d", digit);
        }
        n /= 10;
    }
    if (!odd_digits_exist) {
        printf("N");
    }
    return 0;
}
