#include <stdio.h>

int main() {
    int n, i, largest_odd_divisor = -1;
    printf("nhập số nguyên dương: ");
    scanf("%d", &n);
    if(n<=0)
    {
      printf("N\n");
      return 0;
    }
    for (i = n; i >= 1; i--) {
        if (n % i == 0 && i % 2 == 1) {
            largest_odd_divisor = i;
            break;
        }
    }
    if (largest_odd_divisor == -1) {
        printf("N\n");
    } else {
        printf("%d\n", largest_odd_divisor);
    }
    return 0;
}
