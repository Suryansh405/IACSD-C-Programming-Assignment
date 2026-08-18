#include<stdio.h>

int main(){
    double fTemp,cTemp,kTemp;
    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%lf",&fTemp);
    
    cTemp = (5*(fTemp-32))/9;
    kTemp = cTemp+273.15;

    printf("Temperature in Celsius: %.2lf\n",cTemp);
    printf("Temperature in Kelvin: %.2lf\n",kTemp);
}