//Print the initials of a name.
#include <stdio.h>
#include <string.h>
void printInitials(const char* name) {
    int i = 0;
    int len = strlen(name);
    int isStartOfWord = 1;

    printf("Initials: ");
    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && isStartOfWord) {
            printf("%c", name[i]);
            isStartOfWord = 0;
        }
        if (name[i] == ' ') {
            isStartOfWord = 1;
        }
    }
    printf("\n");
}
int main() {
    const char* name = "John Doe Smith";
    printf("Name: %s\n", name);
    printInitials(name);
    return 0;
}
