#include<stdio.h>

int main(){
    int angle1, angle2, angle3;
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if(angle1<=0||angle2<=0||angle3<=0) printf("The Triangle is Invalid");
    else if(angle1+angle2+angle3==180) printf("The Triangle is Valid");
    else printf("The Triangle is Invalid");
}