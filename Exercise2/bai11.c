#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &a);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &b);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Not a triangle\n");
    } else if (a == b && b == c) {
        printf("Equilateral triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }
    return 0;
}
