//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>
double sum_of_series(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1); // Even numbers: 2, 4, 6, 8, ...
        int denominator = 4 * i + 3; // Denominators: 3, 7, 11, 15, ...
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
