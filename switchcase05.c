#include<stdio.h>

int main(){
    int n1, d1, n2, d2, o;
    int rn, rd, a, b, temp;
    printf("Enter numerators and Denominators : ");
    scanf("%d %d %d %d", &n1, &d1, &n2, &d2);
    printf("Select the oprion:\n1. Add\n2. Subtract\n3. Multiply\n");
    scanf(" %d", &o);

    switch (o)
    {
    case 1:
        if (d1 == d2) {
            rn = n1 + n2;
            rd = d1;
        } else {
            rn = (n1 * d2) + (n2 * d1);
            rd = d1 * d2;
        }
        break;
    case 2:
        if (d1 == d2) {
            rn = n1 - n2;
            rd = d1;
        } else {
            rn = (n1 * d2) - (n2 * d1);
            rd = d1 * d2;
        }
        break;
    case 3:
        rn = n1 * n2;
        rd = d1 * d2;
        break;
    default:
        printf("Invalid Option");
    }
    
    a = rn;
    b = rd;
    if (a < 0) a = -a;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    rn /= a;
    rd /= a;

    printf("Result = %d/%d", rn, rd);
}