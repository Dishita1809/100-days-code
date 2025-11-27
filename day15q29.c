//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the factorial of the number
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Print the result
    printf("The factorial of %d is: %llu\n", n, factorial);

    return 0;
}
