#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);
    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid\n");
    } else {
        printf("The triangle is not valid\n");
    }

    return 0;
}
