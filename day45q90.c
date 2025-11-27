//Toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toggleCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}   
int main() {
    char testStr[] = "Hello World! This is C programming.";
    
    printf("Original string: %s\n", testStr);
    
    toggleCase(testStr);
    
    printf("Toggled case string: %s\n", testStr);
    
    return 0;
}
