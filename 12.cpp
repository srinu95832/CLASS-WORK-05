#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    int count[256] = {0}; // initialize all counts to 0

    // iterate through each character in the string
    for(int i = 0; str[i] != '\0'; i++) {
        // increment the count of the character
        count[(int)str[i]]++;
    }

    // print out the character count for each character that appears at least once
    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("'%c' occurs %d times\n", (char)i, count[i]);
        }
    }

    return 0;
}

