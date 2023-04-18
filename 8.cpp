#include <stdio.h>

int main() {
    int rows, cols, a[50][50], b[50][50];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // check if the matrices are equal
    int flag = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(a[i][j] != b[i][j]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("\nThe matrices are equal.\n");
    } else {
        printf("\nThe matrices are not equal.\n");
    }

    return 0;
}

