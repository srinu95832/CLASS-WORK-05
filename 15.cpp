#include <stdio.h>

// recursive function to get the largest element in an array
int largest(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int max = largest(arr, n-1);
    if(arr[n-1] > max) {
        return arr[n-1];
    }
    return max;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest element in the array: %d", largest(arr, n));

    return 0;
}

