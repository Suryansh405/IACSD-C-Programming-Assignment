#include<stdio.h>

int main(){
    int digit;
    printf("Enter the single digit: ");
    scanf("%d", &digit);
    
    switch(digit){
        case 0:
            printf("%s", "Zero");
            break;
        case 1:
            printf("%s", "One");
            break;
        case 2:
            printf("%s", "Two");
            break;
        case 3:
            printf("%s", "Three");
            break;
        case 4:
            printf("%s", "Four");
            break;
        case 5:
            printf("%s", "Five");
            break;
        case 6:
            printf("%s", "Six");
            break;
        case 7:
            printf("%s", "Seven");
            break;
        case 8:
            printf("%s", "Eight");
            break;
        case 9:
            printf("%s", "Nine");
            break;
        default:
            printf("Invalid Digit");
    }
}