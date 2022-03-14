#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrix, i, j, rowCount, columnsCount;
    rowCount = 5;
    columnsCount = 5;

    matrix = (int **) calloc(rowCount, sizeof(int *));
    for (i = 0; i < rowCount; ++i) {
        matrix[i] = (int *) calloc(columnsCount, sizeof(int));
    }

    for (i = 0; i < rowCount; ++i) {
        for (j = 0; j < columnsCount; ++j) {
            matrix[i][j] = i+j;
        }
    }

    for (i = 0; i < rowCount; ++i) {
        for (j = 0; j < columnsCount; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rowCount; ++i) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
