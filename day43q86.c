//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    const char* testStr = "racecar";
    if (isPalindrome(testStr)) {
        printf("\"%s\" is a palindrome.\n", testStr);
    } else {
        printf("\"%s\" is not a palindrome.\n", testStr);
    }
    return 0;
}
