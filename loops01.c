#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter the number: ");    
    while(num>=0){
        scanf("%d", &num);
        sum+=num;
    }
    printf("Sum = %d", sum);
}