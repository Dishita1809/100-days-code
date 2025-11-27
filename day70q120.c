//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 1000
void toSentenceCase(char *str) {
    int len = strlen(str);
    int newSentence = 1; // Flag to indicate the start of a new sentence

    for (int i = 0; i < len; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        // Check for sentence-ending punctuation
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
    }
}
int main() {
    char str[MAX_LENGTH];
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    toSentenceCase(str);

    printf("Sentence case: %s\n", str);
    return 0;
}
