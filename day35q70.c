//Rotate an array to the right by k positions.
#include <stdio.h>
void rotateArray(int arr[], int size, int k) {
    k = k % size; // In case k is greater than size
    if (k < 0) {
        k += size; // Handle negative k values
    }

    // Function to reverse a portion of the array
    void reverse(int arr[], int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // Reverse the entire array
    reverse(arr, 0, size - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, size - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateArray(arr, size, k);

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
