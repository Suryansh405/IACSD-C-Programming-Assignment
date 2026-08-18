#include <stdio.h>

int main() {
    char name[5][50];
    int id[5];
    char department[5][50];

    for (int i = 0; i < 5; i++) {
        printf("Enter details %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);

        printf("ID: ");
        scanf("%d", &id[i]);

        printf("Department: ");
        scanf(" %[^\n]", department[i]);
    }

    printf("\nEmployee Details:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", name[i]);
        printf("ID: %d\n", id[i]);
        printf("Department: %s\n", department[i]);
    }
}