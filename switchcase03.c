#include<stdio.h>

int main(){
    int x, y, z, option;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Enter the Option: ");
    scanf(" %d", &option);

    switch (option)
    {
    case 1:
        if(x==y) printf("Equal");
        else printf("Not Equal");
        break;
    case 2:
        if(x<y) printf("x is less than y");
        else printf("x is not less than y");
        break;
    case 3:
        printf("Quotient= %d\n",x/y);
        printf("Remainder= %d",x%y);
        break;
    case 4:
        printf("Enter number to check: ");
        scanf(" %d", &z);
        if((z >= x && z <= y) || (z >= y && z <= x)) printf("Number lies between x andd y");
        else printf("Number does not lie between x and y");
        break;
    case 5:
        printf("Before swap: x = %d y = %d",x,y)
        z=x;
        x=y;
        y=z;
        printf("After swap: x = %d y = %d",x,y);
        break;
    default:
        break;
    }
}