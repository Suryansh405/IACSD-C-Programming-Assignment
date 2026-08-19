#include<stdio.h>

int main(){
    int marks;
    scanf("%d", &marks);
    
    if(marks>=75) printf("Grade: A+");
    else if(marks<75 && marks>=65) printf("Grade: A");
    else printf("Grade: B");
}