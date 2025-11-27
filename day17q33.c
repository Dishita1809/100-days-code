//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, originalNumber, remainder, result = 0, digits = 0;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n; // Store the original number

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = n; // Reset originalNumber to n

    // Calculate the sum of the powers of each digit
    while (n != 0) {
        remainder = n % 10;
        result += pow(remainder, digits);
        n /= 10;
    }

    // Check if the original number and result are the same
    if (originalNumber == result) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
