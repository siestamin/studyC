#include <stdio.h>

int main() {
    int n, i;
    int fib0 = 0, fib1 = 1, fibn;
    printf("nhập dãy số fibonacci: ");
    scanf("%d", &n);
    printf(" Fibonacci từ 0 to %d là: \n", n);
    printf("%d ", fib0);
    if (n > 0) {
        printf("%d ", fib1);
    }
    for (i = 2; i <= n; i++) {
        fibn = fib0 + fib1;
        printf("%d ", fibn);
        fib0 = fib1;
        fib1 = fibn;
    }
    return 0;
}
