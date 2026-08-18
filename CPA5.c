#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d %d", &a,&b);
    printf("%d %d\n",a,b);
    
    //**Method 1: Using Third Variable*/
    
    c=a;
    a=b;
    b=c;
    printf("%d %d\n",a,b);

    //**Method 2: Using Arithmetic Operator*/

    b+=a;
    a=b-a;
    b-=a;
    printf("%d %d",a,b);

}