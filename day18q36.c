//Write a program to find the HCF (GCD) of two numbers
#include <stdio.h>
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int result = hcf(num1, num2);
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
