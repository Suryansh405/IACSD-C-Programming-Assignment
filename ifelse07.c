#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch<='Z') ch+=32;
    else if(ch >= 'a' && ch<='z') ch-=32;
    else printf("Invalid Input");

    printf("%c",ch);
}