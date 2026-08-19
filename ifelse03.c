#include<stdio.h>

int main(){
    double basicAnnualSalary, incomeTax;
    scanf("%lf", &basicAnnualSalary);
    if(basicAnnualSalary<150000) incomeTax=0;
    else if(basicAnnualSalary<=300000) incomeTax=0.2*basicAnnualSalary;
    else incomeTax=0.3*basicAnnualSalary;

    printf("Income Tax: %.2lf",incomeTax);
}