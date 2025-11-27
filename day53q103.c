//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
#include <stdio.h>
int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum -= arr[i]; // Now totalSum is the right sum for index i

        if (leftSum == totalSum) {
            return i; // Pivot index found
        }

        leftSum += arr[i]; // Update left sum for next index
    }

    return -1; // No pivot index found
}
int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivotIndex(arr, size);

    if (pivotIndex != -1) {
        printf("Pivot index is: %d\n", pivotIndex);
    } else {
        printf("No pivot index exists.\n");
    }

    return 0;
}
