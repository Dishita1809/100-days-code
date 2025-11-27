//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
void findFirstAndLastOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1;
    *last = -1;

    // Find first occurrence
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            *first = i;
            break;
        }
    }

    // Find last occurrence
    for (int i = size - 1; i >= 0; i--) {
        if (nums[i] == target) {
            *last = i;
            break;
        }
    }
}
int main() {
    int nums[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 2;
    int first, last;

    findFirstAndLastOccurrence(nums, size, target, &first, &last);

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);

    return 0;
}
