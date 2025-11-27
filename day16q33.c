//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, originalNumber, reversedNumber = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n; // Store the original number

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
