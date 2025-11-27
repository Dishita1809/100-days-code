//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
void replaceSpacesWithHyphens(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char testStr[] = "Hello World! This is C programming.";
    
    printf("Original string: \"%s\"\n", testStr);
    
    replaceSpacesWithHyphens(testStr);
    
    printf("Modified string: \"%s\"\n", testStr);
    
    return 0;
}
