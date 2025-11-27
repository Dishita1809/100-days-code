//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void sumRows(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int rowSums[MAX_ROWS]) {
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
}
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS];
    int rows, cols;

    printf("Enter the number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Exceeded maximum matrix size.\n");
        return 1;
    }

    readMatrix(matrix, rows, cols);
    sumRows(matrix, rows, cols, rowSums);

    printf("The sum of each row is:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
