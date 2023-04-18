#include <stdio.h>
#include <stdbool.h>

// recursive function to check if a number is prime
bool isPrime(int n, int i) {
    if(i == 1) {
        return true;
    }
    if(n % i == 0) {
        return false;
    }
    return isPrime(n, i-1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n, n/2)) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }

    return 0;
}

