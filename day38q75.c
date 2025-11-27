//Find the transpose of a matrix.
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
void transposeMatrix(int matrix[MAX_ROWS][MAX_COLS], int transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
void printMatrix(int matrix[MAX_COLS][MAX_ROWS], int rows, int cols) {
    printf("The transposed matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int transposed[MAX_COLS][MAX_ROWS];
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
    transposeMatrix(matrix, transposed, rows, cols
