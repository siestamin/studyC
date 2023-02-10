#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter the coefficient of x^2: ");
    scanf("%lf", &a);
    printf("Enter the coefficient of x: ");
    scanf("%lf", &b);
    printf("Enter the constant: ");
    scanf("%lf", &c);

    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("The quadratic equation has two distinct real roots:\n");
        printf("root1 = %.2lf and root2 = %.2lf\n",root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("The quadratic equation has one real root:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        printf("The quadratic equation has no real roots.\n");
    }
    return 0;
}
