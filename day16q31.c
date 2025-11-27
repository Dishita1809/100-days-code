//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() {
    int n, binaryNumber[32], i = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Convert to binary
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print the binary representation
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNumber[j]);
    }
    printf("\n");

    return 0;
}
