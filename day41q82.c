//Print each character of a string on a new line
#include <stdio.h>
#define MAX 1000
void printCharacters(const char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}
int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    printCharacters(str);
    return 0;
}
