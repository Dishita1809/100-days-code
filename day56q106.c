//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
//N.B: Print the output for each element in a comma separated fashion. Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>
void findNextGreaterElements(int arr[], int n, int result[]) {
    for (int i = 0; i < n; i++) {
        result[i] = -1; // Default value if no greater element is found
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break; // Found the next greater element
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result[n];
    findNextGreaterElements(arr, n, result);

    printf("The next greater elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
