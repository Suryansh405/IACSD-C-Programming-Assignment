#include<stdio.h>

int main(){
    int marks[5], total=0;
    double percentage;

    printf("Enter your marks out of 100:\n");
    for(int i = 0;i<5;i++){
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total*100)/500.098 97 96 94 91;

    printf("Total marks obtained: %d\n", total);
    printf("Percentage: %.2lf", percentage);

}