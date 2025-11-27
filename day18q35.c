//Write a program to print all factors of a given number.
#include <stdio.h>
void print_factors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    print_factors(n);
    return 0;
}
