#include <stdio.h>

int main() {
    int arr1[50], arr2[50], res[100], size1, size2, size_res;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array: ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array: ");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // concatenate the arrays
    for(int i = 0; i < size1; i++) {
        res[i] = arr1[i];
    }
    size_res = size1 + size2;
    for(int i = 0; i < size2; i++) {
        res[size1+i] = arr2[i];
    }

    // print the concatenated array
    printf("\nThe concatenated array is: ");
    for(int i = 0; i < size_res; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}

