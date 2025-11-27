//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>
void maxInSubarrays(int* arr, int arrSize, int k) {
    if (k > arrSize) {
        printf("Subarray size k is larger than the array size.\n");
        return;
    }
    
    for (int i = 0; i <= arrSize - k; i++) {
        int maxElement = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j];
            }
        }
        printf("%d ", maxElement);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    maxInSubarrays(arr, arrSize, k);
    
    return 0;
}

