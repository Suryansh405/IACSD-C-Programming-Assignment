#include<stdio.h>

int main(){
    int x, n, i=0, ans=1;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &n);
    while(i<n){
        ans*=x;
        i++;
    }
    printf("Ans = %d", ans);
}