#include <stdio.h>

// recursive function to calculate the nth Fibonacci number
int fib(int n) {
    if(n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

