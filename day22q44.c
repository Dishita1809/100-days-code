//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include <stdio.h>
double sum_of_series(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1; // Odd numbers: 1, 3, 5, 7, ...
        int denominator = 2 * i + 2; // Even numbers: 2, 4, 6, 8, ...
        sum += (double)numerator / denominator;
    }
    return sum;
}
int main() {
    int terms;
    
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    if (terms <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1;
    }
    
    double result = sum_of_series(terms);
    printf("The sum of the series up to %d terms is: %.2f\n", terms, result);
    
    return 0;
}
