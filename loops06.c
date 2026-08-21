#include <stdio.h>

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}
int main() {
    int num1 = 48, num2 = 18;
    int result = findGCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);    
}
