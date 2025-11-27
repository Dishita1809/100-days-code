//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int total = n * (n + 1) / 2; // Sum of first n natural numbers
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum; // The missing number
}   
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    int missingNumber = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missingNumber);
    return 0;
}
