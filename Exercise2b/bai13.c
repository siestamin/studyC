#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("nhập m\n ");
    scanf("%d", &m);
    printf("nhập n\n ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
