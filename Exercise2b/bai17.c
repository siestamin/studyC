#include <stdio.h>

int main() {
    int n, k;
    int sum = 0;
    printf("nhập số nguyên dương n\n ");
    scanf("%d", &n);
    if(n<=0)
    {
      printf("N\n");
      return 0;
    }
    for (k = 1; k <= n; k++) {
        sum += k;
        if (sum > n) {
            k--;
            break;
        }
    }
    printf("%d\n", k);
    return 0;
}
