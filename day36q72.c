//Find the sum of all elements in a matrix
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
int sumMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Exceeded maximum matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalSum = sumMatrix(matrix, rows, cols);
    printf("The sum of all elements in the matrix is: %d\n", totalSum);

    return 0;
}
