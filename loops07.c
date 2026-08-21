#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int operation;
    float radius, length, breadth, base, height;
    
    printf("MENU\nChoose the operation:\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n");
    scanf("%d", &operation);
    
    switch (operation)
    {
    case 1:
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        printf("Area = %.2f", PI*pow(radius,2));
        break;
    case 2:
        printf("Enter length and breadth of the rectangle: ");
        scanf("%f %f", &length, &breadth);
        printf("Area = %.2f", length*breadth);
        break;
    case 3:
        printf("Enter base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        printf("Area = %.2f", 0.5*base*height);
        break;
    default:
        printf("Invalid Operation");
    }    
}