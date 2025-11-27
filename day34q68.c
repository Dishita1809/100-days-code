//Delete an element from an array.
#include <stdio.h>
void deleteElement(int arr[], int *size, int element) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (arr[i] == element) {
            found = 1;
            // Shift elements to the left to fill the gap
            for (int j = i; j < *size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*size)--; // Decrease the size of the array
            break; // Exit after deleting the first occurrence
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5; // Current number of elements in the array
    int element;

    // Read the element to be deleted
    printf("Enter the number to delete: ");
    scanf("%d", &element);

    // Delete the element from the array
    deleteElement(arr, &size, element);

    // Print the updated array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
