#include <stdio.h>

// recursive function to calculate the GCD of two numbers
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD(%d, %d) = %d", a, b, gcd(a, b));

    return 0;
}

