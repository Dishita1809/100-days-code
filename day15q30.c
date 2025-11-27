//Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int n, reversedNumber = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    // Print the result
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
