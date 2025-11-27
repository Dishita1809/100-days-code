//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digitCount[10] = {0}, maxDigit = 0, maxCount = 0;

    // Read an integer number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count occurrences of each digit
    while (number != 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum occurrences
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            maxDigit = i;
        }
    }

    // Print the result
    printf("The digit that occurs the most is: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}
