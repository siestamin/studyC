#include <stdio.h>
#include <math.h>

int main() {
    int choice, number;
    char finish;

    while (1) {
         printf("Menu:\n");
    printf("**************************************\n");
    printf("* 1. Check for Armstrong's number    *\n");
    printf("* 2. Check for prime number          *\n");
    printf("* 3. Finish                          *\n");
    printf("**************************************\n");
    printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                int originalNumber, remainder, result = 0, n = 0;
                originalNumber = number;
                while (originalNumber != 0) {
                    originalNumber /= 10;
                    ++n;
                }
                originalNumber = number;
                while (originalNumber != 0) {
                    remainder = originalNumber % 10;
                    result += pow(remainder, n);
                    originalNumber /= 10;
                }
                if (result == number)
                    printf("%d is an Armstrong number.\n", number);
                else
                    printf("%d is not an Armstrong number.\n", number);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                int i, flag = 0;
                for (i = 2; i <= number / 2; ++i) {
                    if (number % i == 0) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    printf("%d is a prime number.\n", number);
                else
                    printf("%d is not a prime number.\n", number);
                break;
            case 3:
                printf("Do you want to finish (c/k)? ");
                scanf(" %c", &finish);
                if (finish == 'c') {
                   continue;
                }
                else if (finish == 'k') {
                    continue;
                }
                else {
                    printf("Invalid input\n");
                }
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
