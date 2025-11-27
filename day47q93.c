//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define CHAR_COUNT 256
bool areAnagrams(const char *str1, const char *str2) {
    int count[CHAR_COUNT] = {0};
    
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }
    
    // Count characters in str1
    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    
    // Check if all counts are zero
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    
    return true;
}
int main() {
    const char *string1 = "listen";
    const char *string2 = "silent";
    
    if (areAnagrams(string1, string2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", string1, string2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", string1, string2);
    }
    
    return 0;
}
