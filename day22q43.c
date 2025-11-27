//Write a program to check if a number is a strong number
#include <stdio.h>
int is_strong_number(int num) {
    if (num < 0) {
        return 0; // Strong numbers are non-negative
    }
    
    int original_num = num;
    int sum_of_factorials = 0;
    
    // Function to calculate factorial
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
    
    // Calculate the sum of the factorials of each digit
    while (num > 0) {
        int digit = num % 10;
        sum_of_factorials += factorial(digit);
        num /= 10;
    }
    
    // A strong number is equal to the sum of the factorials of its digits
    return sum_of_factorials == original_num;
}
int main() {
    int number;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    if (is_strong_number(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }
    
    return 0;
}
