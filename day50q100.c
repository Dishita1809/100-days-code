//Print all sub-strings of a string
#include <stdio.h>
#include <string.h>
void printSubstrings(const char* str) {
    int len = strlen(str);
    printf("Sub-strings of \"%s\":\n", str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
}
int main() {
    const char* str = "abc";
    printSubstrings(str);
    return 0;
}
