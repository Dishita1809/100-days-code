//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // If lengths are different, str2 cannot be a rotation of str1
    if (len1 != len2) {
        return false;
    }
    
    // Create a new string that is str1 concatenated with itself
    char concatenated[2 * len1 + 1];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);
    
    // Check if str2 is a substring of the concatenated string
    return strstr(concatenated, str2) != NULL;
}
int main() {
    const char *string1 = "waterbottle";
    const char *string2 = "erbottlewat";
    
    if (isRotation(string1, string2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", string2, string1);
    } else {
        printf("\"%s\" is not a rotation of \"%s\".\n", string2, string1);
    }
    
    return 0;
}
