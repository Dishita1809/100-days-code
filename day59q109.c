//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
void maxSumSubarray(int* arr, int arrSize, int k) {
    if (k > arrSize) {
        printf("Subarray size k is larger than the array size.\n");
        return;
    }
    
    int maxSum = 0;
    int currentSum = 0;
    
    // Calculate the sum of the first k elements
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    
    // Slide the window over the array
    for (int i = k; i < arrSize; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
}
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    
    maxSumSubarray(arr, arrSize, k);
    
    return 0;
}
