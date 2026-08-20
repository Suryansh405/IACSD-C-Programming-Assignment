#include <stdio.h>

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMENU\n");
    printf("1. Even\n");
    printf("2. Odd\n");
    printf("3. Positive\n");
    printf("4. Negative\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (num % 2 == 0)
                printf("Even Number");
            else
                printf("Not Even");
            break;
        case 2:
            if (num % 2 != 0)
                printf("Odd Number");
            else
                printf("Not Odd");
            break;
        case 3:
            if (num > 0)
                printf("Positive Number");
            else
                printf("Not Positive");
            break;
        case 4:
            if (num < 0)
                printf("Negative Number");
            else
                printf("Not Negative");
            break;
        default:
            printf("Invalid Choice");
    }
}