#include<stdio.h>

int main(){
    char ch;
    int n, i=0;
    printf("Enter the character: ");
    scanf("%c", &ch);
    
    printf("Enter the integer: ");
    scanf("%d", &n);

    while(i<=n){
        printf("%c ", ch+i);
        i++;
    }
}