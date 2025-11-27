//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swap_first_last(int num) {
    int first_digit, last_digit, num_digits, power_of_ten;
    
    // If the number is a single digit, return it as is
    if (num < 10) {
        return num;
    }
    
    last_digit = num % 10;
    
    // Find the number of digits and the first digit
    num_digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }
    
    power_of_ten = 1;
    for (int i = 1; i < num_digits; i++) {
        power_of_ten *= 10;
    }
    
    first_digit = num / power_of_ten;
    
    // Remove first and last digits from the number
    int middle_part = (num % power_of_ten) / 10;
    
    // Construct the new number with swapped digits
    int swapped_num = last_digit * power_of_ten + middle_part * 10 + first_digit;
    
    return swapped_num;
}
int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int swapped_number = swap_first_last(number);
    
    printf("Number after swapping first and last digits: %d\n", swapped_number);
    
    return 0;
}
