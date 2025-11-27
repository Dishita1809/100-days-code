//Remove all vowels from a string
#include <stdio.h>
#include <string.h> 
int isVowel(char ch) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (ch == vowels[i]) {
            return 1;
        }
    }
    return 0;
}
void removeVowels(char* str) {
    int writeIndex = 0;
    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (!isVowel(str[readIndex])) {
            str[writeIndex++] = str[readIndex];
        }
    }
    str[writeIndex] = '\0';
}
int main() {
    char testStr[] = "Hello World! This is C programming.";
    
    printf("Original string: %s\n", testStr);
    
    removeVowels(testStr);
    
    printf("String after removing vowels: %s\n", testStr);
    
    return 0;
}
