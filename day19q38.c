//Write a program to find the sum of digits of a number.
#include <stdio.h>
int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = sum_of_digits(num);
    printf("Sum of digits of %d is: %d\n", num, result);
    return 0;
}
