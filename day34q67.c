//Insert an element in an array at a given position.
#include <stdio.h>
void insertAtPosition(int arr[], int *size, int capacity, int element, int position
) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position. Cannot insert element.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element; // Insert the new element
    (*size)++; // Increase the size of the array
}   
int main() {
    int capacity = 10;
    int arr[10] = {1, 2, 4, 5, 6};
    int size = 5; // Current number of elements in the array
    int element, position;

    // Read the element to be inserted
    printf("Enter the number to insert: ");
    scanf("%d", &element);

    // Read the position where the element should be inserted
    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    // Insert the element at the specified position
    insertAtPosition(arr, &size, capacity, element, position);

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
