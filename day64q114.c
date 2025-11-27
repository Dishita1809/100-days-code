//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int index[256] = {0}; // ASCII character set

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];
        start = (index[(unsigned char)currentChar] > start) ? index[(unsigned char)currentChar] : start;
        maxLength = (maxLength > (end - start + 1)) ? maxLength : (end - start + 1);
        index[(unsigned char)currentChar] = end + 1; // Update the last seen index
    }
    return maxLength;
}
int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);
    int length = lengthOfLongestSubstring(s);
    printf("The length of the longest substring without repeating characters is: %d\n", length);
    return 0;
}
