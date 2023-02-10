#include <stdio.h>

int main() {
    int num;
    printf("Enter a number within the range of 1 through 10: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("The Roman numeral is I\n");
            break;
        case 2:
            printf("The Roman numeral is II\n");
            break;
        case 3:
            printf("The Roman numeral is III\n");
            break;
        case 4:
            printf("The Roman numeral is IV\n");
            break;
        case 5:
            printf("The Roman numeral is V\n");
            break;
        case 6:
            printf("The Roman numeral is VI\n");
            break;
        case 7:
            printf("The Roman numeral is VII\n");
            break;
        case 8:
            printf("The Roman numeral is VIII\n");
            break;
        case 9:
            printf("The Roman numeral is IX\n");
            break;
        case 10:
            printf("The Roman numeral is X\n");
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
