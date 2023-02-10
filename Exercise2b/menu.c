#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int num_digits = floor(log10(num) + 1);
    int original_num = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, num_digits);
        num /= 10;
    }
    return sum == original_num;
}

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    while (1) {
        printf("Menu:\n");
        printf("1: Check if a number is an Armstrong number\n");
        printf("2: Check if a number is a prime number\n");
        printf("3: Exit\n");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (is_armstrong(num)) {
                    printf("The number is an Armstrong number\n");
                } else {
                    printf("The number is not an Armstrong number\n");
                }
                break;
            }
            case 2: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (is_prime(num)) {
                    printf("The number is a prime number\n");
                } else {
                    printf("The number is not a prime number\n");
                }
                break;
            }
            case 3: {
                char answer;
                printf("Do you want to finish (c/k)?\n");
                scanf(" %c", &answer);
                if (answer == 'c') {
                    return 0;
                } else if (answer == 'k') {
                    break;
                } else {
                    printf("Invalid input, please try again\n");
                }
            }
        }
    }
    return 0;
}
