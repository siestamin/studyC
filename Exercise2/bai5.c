#include <stdio.h>

int main() {
    float length1, width1, area1, length2, width2, area2;
    printf("Enter the length of the first rectangle: ");
    scanf("%f", &length1);
    printf("Enter the width of the first rectangle: ");
    scanf("%f", &width1);
    area1 = length1 * width1;

    printf("Enter the length of the second rectangle: ");
    scanf("%f", &length2);
    printf("Enter the width of the second rectangle: ");
    scanf("%f", &width2);
    area2 = length2 * width2;

    if (area1 > area2) {
        printf("The first rectangle has greater area.\n");
    } else if (area2 > area1) {
        printf("The second rectangle has greater area.\n");
    } else {
        printf("Both rectangles have the same area.\n");
    }

    return 0;
}
