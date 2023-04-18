#include <stdio.h>

// function to find the maximum of two numbers
int max(int *a, int *b) {
    if(*a > *b) {
        return *a;
    } else {
        return *b;
    }
}

int main() {
    int x, y, max_num;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    max_num = max(&x, &y);

    printf("The maximum of %d and %d is %d", x, y, max_num);

    return 0;
}

