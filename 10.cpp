#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000], new_sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, 1000, stdin);

    // iterate through each character in the sentence
    for(int i = 0; sentence[i] != '\0'; i++) {
        // check if the character is uppercase
        if(isupper(sentence[i])) {
            // convert to lowercase and add to new sentence
            new_sentence[i] = tolower(sentence[i]);
        } else if(islower(sentence[i])) {
            // convert to uppercase and add to new sentence
            new_sentence[i] = toupper(sentence[i]);
        } else {
            // character is not a letter, add to new sentence as is
            new_sentence[i] = sentence[i];
        }
    }

    // print out the new sentence
    printf("New sentence: %s", new_sentence);

    return 0;
}

