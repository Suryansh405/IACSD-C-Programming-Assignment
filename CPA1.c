#include<stdio.h>
#include<math.h>

int main(){
    double radius, circumference, area;

    printf("Enter the Radius: ");
    scanf("%lf", &radius);

    area = 3.14 * pow(radius,2);
    circumference = 2 * 3.14 * radius;

    printf("Area: %.2lf\n", area);
    printf("Circumfernce: %.2lf", circumference);

    return 0;
}