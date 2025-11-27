//Check if a matrix is symmetric
#include <stdio.h>
#define MAX_SIZE 10
int isSymmetric(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
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

    if (isSymmetric(matrix, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
{
    printMatrix(transposed, cols, rows);

    return 0;
}
