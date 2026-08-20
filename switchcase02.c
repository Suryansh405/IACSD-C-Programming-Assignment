#include<stdio.h>

int main(){
    char ch;
    int num1, num2;
    printf("Enter the integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the operator to perform: ");
    scanf(" %c", &ch);
    
    switch (ch)
    {
    case '+':
        printf("%d",num1+num2);       
        break;
    case '-':
        printf("%d",num1-num2);       
        break;
    case '*':
        printf("%d",num1*num2);       
        break;
    case '/':
        printf("%d",num1/num2);       
        break;
    default:
        printf("Invalid Operator");
        break;
    }
}