//Find the second largest element in an array.
#include <stdio.h>
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return -1; // Indicate error
    }

    int first, second;
    first = second = -2147483648; // Initialize to minimum integer value

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no second largest element.\n");
        return -1; // Indicate error
    }

    return second;
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);
    if (secondLargest != -1) {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
