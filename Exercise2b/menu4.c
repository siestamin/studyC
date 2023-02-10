#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += i*i;
    }
    printf("The value of the expression is: %d", sum);
    return 0;
}
