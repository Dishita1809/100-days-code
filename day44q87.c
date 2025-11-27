//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void countCharacters(const char* str, int* spaceCount, int* digitCount, int* specialCount) {
    *spaceCount = 0;
    *digitCount = 0;
    *specialCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            (*spaceCount)++;
        } else if (isdigit((unsigned char)str[i])) {
            (*digitCount)++;
        } else if (!isalnum((unsigned char)str[i])) {
            (*specialCount)++;
        }
    }
}
int main() {
    const char* testStr = "Hello World! 1234 @2024";
    int spaces, digits, specials;

    countCharacters(testStr, &spaces, &digits, &specials);

    printf("In the string: \"%s\"\n", testStr);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specials);

    return 0;
}
