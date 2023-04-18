#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); // dynamically allocate memory for array

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element in the array is %d\n", max);

    free(arr); // free the dynamically allocated memory

    return 0;
}

