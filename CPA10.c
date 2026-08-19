#include<stdio.h>

int main(){
    int length, breadth, area, parameter;
    printf("Enter the dimensions: ");
    scanf("%d %d",&length,&breadth);

    area = length*breadth;
    parameter = 2*(length+breadth);

    printf("Area: %d\nParameter: %d", area,parameter);
}