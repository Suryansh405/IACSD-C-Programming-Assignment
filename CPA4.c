#include<stdio.h>

int main(){
    double salary, netSalary, pf, tax, hra, da;
    printf("Enter your Basic Salary: ");
    scanf("%lf", &salary);
    
    pf = 0.02*salary;
    tax = 0.03*salary;
    hra = 0.05*salary;
    da = 0.08*salary;

    netSalary = salary+da+hra-tax-pf;

    printf("Net Salary: %.2lf", netSalary);
}