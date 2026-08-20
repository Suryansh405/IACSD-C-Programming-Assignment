#include <stdio.h>

int main() {
    int choice;
    float x, y;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %.2f", x + y);
            break;
        case 2:
            printf("Result = %.2f", x - y);
            break;
        case 3:
            printf("Result = %.2f", x * y);
            break;
        case 4:
            if (y != 0)
                printf("Result = %.2f", x / y);
            else
                printf("Division by zero is not possible");
            break;
        default:
            printf("Invalid choice");
    }
 }