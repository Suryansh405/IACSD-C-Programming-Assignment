#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    int operation=0;
    float radius, length, breadth, base, height;
        
    while(operation!=4){
        printf("MENU\nChoose the operation:\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. EXIT\n");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("Area = %.2f\n", PI*pow(radius,2));
            break;
        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            printf("Area = %.2f\n", length*breadth);
            break;
        case 3:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("Area = %.2f\n", 0.5f*base*height);
            break;
        case 4:
            printf("THANK YOU");
            break;
        default:
            printf("Invalid Operation");
        }    
    }
}