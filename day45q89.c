//Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>
int countCharacterFrequency(const char* str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
int main() {
    const char* testStr = "Hello World! This is C programming.";
    char targetChar = 'i';
    
    int frequency = countCharacterFrequency(testStr, targetChar);
    
    printf("The character '%c' appears %d times in the string.\n", targetChar, frequency);
    
    return 0;
}
