#include <stdio.h>

int main() {
    int choice, empId;
    char empName[50];
    float empSalary;

    printf("1. Accept Employee Details\n");
    printf("2. Display Employee Details\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Employee Name: ");
            scanf(" %[^\n]", empName);

            printf("Enter Employee ID: ");
            scanf("%d", &empId);

            printf("Enter Employee Salary: ");
            scanf("%f", &empSalary);

            printf("\nEmployee Details Saved");
            break;
        case 2:
            printf("No employee data available.\n");
            printf("Choose option 1 first to enter details.");
            break;
        default:
            printf("Invalid choice");
    }
}