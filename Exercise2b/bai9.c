#include <stdio.h>
#include <math.h>

int main() {
    int m, n, temp, sum, num_digits, check;
    printf("nhập m: ");
    scanf("%d", &m);
    printf("nhập n: ");
    scanf("%d", &n);
    printf("Armstrong numbers từ %d và %d là: ", m, n);

    for (int i = m; i <= n; i++) {
        temp = i;
        sum = 0;
        num_digits = (int) log10(i) + 1;
        while (temp > 0) {
            check = temp % 10;
            sum += pow(check, num_digits);
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
