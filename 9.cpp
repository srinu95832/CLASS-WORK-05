#include <stdio.h>

int main() {
    int n, matrix[50][50];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // check if the matrix is an identity matrix
    int flag = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && matrix[i][j] != 1) {
                flag = 0;
                break;
            } else if(i != j && matrix[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        printf("\nThe given matrix is an identity matrix.\n");
    } else {
        printf("\nThe given matrix is not an identity matrix.\n");
    }

    return 0;
}

