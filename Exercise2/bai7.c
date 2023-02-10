#include <stdio.h>

int main() {
    float dollar, euro, yen, pound, dong;
    int choice;
    printf("Enter the amount of US dollar: ");
    scanf("%f", &dollar);
    while(dollar <= 0) {
        printf("Invalid Input. Enter a number greater than 0: ");
        scanf("%f", &dollar);
    }

    printf("Select a currency to convert to:\n");
    printf("1. Euro\n2. Japanese Yen\n3. British Pound\n4. Vietnamese Dong\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            euro = dollar * 0.86;
            printf("%.2f US dollar = %.2f Euro\n", dollar, euro);
            break;
        case 2:
            yen = dollar * 107.87;
            printf("%.2f US dollar = %.2f Japanese Yen\n", dollar, yen);
            break;
        case 3:
            pound = dollar * 0.78;
            printf("%.2f US dollar = %.2f British Pound\n", dollar, pound);
            break;
        case 4:
            dong = dollar * 23208.5;
            printf("%.2f US dollar = %.2f Vietnamese Dong\n", dollar, dong);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
