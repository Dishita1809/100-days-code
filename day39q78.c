//Find the sum of main diagonal elements for a square matrix
#include <stdio.h>
#define MAX_SIZE 10
int sumOfMainDiagonal(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }
    return sum;
}
int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Enter the size of the square matrix (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Error: Exceeded maximum matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the matrix (%d x %d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = sumOfMainDiagonal(matrix, size);
    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
