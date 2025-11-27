//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int findRepeatedElement(int arr[], int n) {
    int seen[n]; // Auxiliary array to keep track of seen elements
    for (int i = 0; i < n; i++) {
        seen[i] = 0; // Initialize all elements to 0
    }
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            return arr[i]; // Found the repeated element
        }
        seen[arr[i]] = 1; // Mark this element as seen
    }
    return -1; // This line should never be reached if input is valid
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array (elements should be in range 0 to n-1): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int repeatedElement = findRepeatedElement(arr, n);
    if (repeatedElement != -1) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found\n");
    }
    return 0;
}
