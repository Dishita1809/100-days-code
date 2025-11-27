//Multiply two matrices
#include <stdio.h>
#define MAX 10
void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}
int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    if (columnFirst != rowSecond) {
        printf("Error! column of first matrix must be equal to row of second.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++) {
        for (int j = 0; j < columnSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    multiplyMatrices(first, second, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < rowFirst; i++) {
        for (int j = 0; j < columnSecond; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
