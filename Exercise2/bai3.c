#include <stdio.h>

int main() {
    int month, day, year;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    printf("Enter a day (1-31): ");
    scanf("%d", &day);
    printf("Enter a two-digit year: ");
    scanf("%d", &year);

    if (month * day == year) {
        printf("The date is magic\n");
    } else {
        printf("The date is not magic\n");
    }

    return 0;
}
