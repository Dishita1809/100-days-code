//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long product = 1;
    int hasEven = 0; // Flag to check if there are any even numbers

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1; // Set flag to true if at least one even number is found
    }

    // Print the result
    if (hasEven) {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("There are no even numbers from 1 to %d.\n", n);
    }

    return 0;
}
