//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int product_of_odd_digits(int n) {
    int product = 1;
    int has_odd = 0; // Flag to check if there is at least one odd digit
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            has_odd = 1;
        }
        n /= 10;
    }
    return has_odd ? product : 0; // Return 0 if no odd digits were found
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = product_of_odd_digits(num);
    if (result != 0) {
        printf("Product of odd digits of %d is: %d\n", num, result);
    } else {
        printf("There are no odd digits in %d.\n", num);
    }
    return 0;
}
