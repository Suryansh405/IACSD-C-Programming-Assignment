#include<stdio.h>
#include<math.h>

int main(){
    double radius, height, surArea, volume;
    printf("Enter the dimensions: ");
    scanf("%lf %lf",&radius, &height);
    
    surArea = 2*3.14*radius*(radius+height);
    volume = 3.14*pow(radius,2)*height;

    printf("Surface Area: %.2lf\n",surArea);
    printf("Volume: %.2lf",volume);
}