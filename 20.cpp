#include <stdio.h>

int main() {
    FILE *source_file, *dest_file;
    char source_name[100], dest_name[100], c;

    printf("Enter the name of the source file: ");
    scanf("%s", source_name);

    printf("Enter the name of the destination file: ");
    scanf("%s", dest_name);

    source_file = fopen(source_name, "r"); // open the source file in read mode

    if(source_file == NULL) {
        printf("Error: Source file not found.\n");
        return 1;
    }

    dest_file = fopen(dest_name, "w"); // open the destination file in write mode

    if(dest_file == NULL) {
        printf("Error: Cannot create destination file.\n");
        return 1;
    }

    while((c = fgetc(source_file)) != EOF) {
        fputc(c, dest_file); // write each character to the destination file
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(dest_file);

    return 0;
}

