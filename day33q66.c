//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
void insertInSortedArray(int arr[], int *size, int capacity, int element) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }

    int i;
    // Find the position where the new element should be inserted
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = element; // Insert the new element
    (*size)++; // Increase the size of the array
}
int main() {
    int capacity = 10;
    int arr[10] = {2, 4, 6, 8, 10};
    int size = 5; // Current number of elements in the array
    int element;

    // Read the element to be inserted
    printf("Enter the number to insert: ");
    scanf("%d", &element);

    // Insert the element in the sorted array
    insertInSortedArray(arr, &size, capacity, element);

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
