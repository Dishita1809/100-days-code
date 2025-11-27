//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
void printInitialsWithSurname(const char* name) {
    int i = 0;
    int len = strlen(name);
    int isStartOfWord = 1;

    printf("Initials with Surname: ");
    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && isStartOfWord) {
            // Print the initial
            printf("%c. ", name[i]);
            isStartOfWord = 0;
        }
        if (name[i] == ' ') {
            isStartOfWord = 1;
        }
    }

    // Print the surname (last word)
    const char* lastSpace = strrchr(name, ' ');
    if (lastSpace != NULL) {
        printf("%s\n", lastSpace + 1);
    } else {
        // If there's no space, the whole name is the surname
        printf("%s\n", name);
    }
}
int main() {
    const char* name = "John Michael Doe";
    printf("Name: %s\n", name);
    printInitialsWithSurname(name);
    return 0;
}
