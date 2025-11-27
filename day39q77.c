//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#define MAX_SIZE 10
int areDiagonalElementsDistinct(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0; // Not distinct
            }
        }
    }
    return 1; // Distinct
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

    if (areDiagonalElementsDistinct(matrix, size)) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}
