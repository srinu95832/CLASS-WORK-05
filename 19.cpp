#include <stdio.h>

int main() {
    FILE *fp;
    int count = 0;
    char filename[100], c;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    fp = fopen(filename, "r"); // open the file in read mode

    if(fp == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) {
        if(c == '\n') {
            count++;
        }
    }

    printf("The number of lines in the file is %d\n", count + 1);

    fclose(fp);

    return 0;
}

