#include<stdio.h>
#include<math.h>
#define PI 3.14

int main(){
    double r;
    int o;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    printf("Select the oprion:\n1. Area\n2. Circumference\n3. Volume\n");
    scanf(" %d", &o);

    switch (o)
    {
    case 1:
        printf("Area: %.2lf", PI*pow(r,2));
        break;
    case 2:
        printf("Circumference: %.2lf", 2*PI*r);
        break;
    case 3:
        printf("Area: %.2lf", (4*PI*pow(r,3))/3);
        break;
    default:
        printf("Invalid Option");
    }

}