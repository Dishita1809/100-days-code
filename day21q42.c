//Write a program to check if a number is a perfect number.
#include <stdio.h>
int is_perfect_number(int num) {
    if (num <= 1) {
        return 0; // Perfect numbers are greater than 1
    }
    
    int sum_of_divisors = 0;
    
    // Find all divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }
    
    // A perfect number is equal to the sum of its proper divisors
    return sum_of_divisors == num;
}
int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (is_perfect_number(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    
    return 0;
}
