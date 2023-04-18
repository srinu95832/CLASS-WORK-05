#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], new_str[1000];

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    int j = 0;
    // iterate through each character in the string
    for(int i = 0; str[i] != '\0'; i++) {
        // check if the character is an alphabet
        if(isalpha(str[i])) {
            // add the character to the new string
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';

    // print out the new string
    printf("New string: %s", new_str);

    return 0;
}

