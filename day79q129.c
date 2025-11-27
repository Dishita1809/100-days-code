//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both
#include <stdio.h>
#define MAX_LENGTH 1000
int main() {
    FILE *file;
    int number;
    int sum = 0;
    int count = 0;
    float average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}
