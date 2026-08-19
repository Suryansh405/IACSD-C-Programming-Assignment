#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if(ch >= 'A' && ch<='Z') printf("The charcter is UPPERCASE");
    else if(ch >= 'a' && ch<='z') printf("The charcter is lowercase");
    else printf("Invalid Input");
}