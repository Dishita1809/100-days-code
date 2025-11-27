//Find the first repeating lowercase alphabet in a string
#include <stdio.h>
#include <string.h>
char firstRepeatingLowercase(const char* str) {
    int freq[26] = {0}; // Frequency array for 'a' to 'z'
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                return str[i];
            }
        }
    }
    return '\0'; // Return null character if no repeating lowercase found
}
int main() {
    const char* testStr = "hello world! this is c programming.";
    
    char repeatingChar = firstRepeatingLowercase(testStr);
    
    if (repeatingChar != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", repeatingChar);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    return 0;
}
