#include<stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    if(number%5==0 && number%7==0) printf("Number is divisible by 7 and 5");
    else printf("Number is not divisible by Both");
}