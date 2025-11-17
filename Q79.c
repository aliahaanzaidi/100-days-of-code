#include <stdio.h>
#include <stdlib.h>

/* Q79.c
 * Keep a single, well-formed program in this file.
 * This program reads rows and columns, then reads a rows x cols matrix of ints
 * and prints its anti-diagonals (elements on the same r+c = const), separated by
 * spaces and followed by a newline.
 */

int main(void) {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) return 1;
    if (rows <= 0 || cols <= 0) return 1;

    /* For small sizes use a VLA for simplicity; otherwise allocate on the heap. */
    if (rows <= 100 && cols <= 100) {
        int matrix[rows][cols];
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (scanf("%d", &matrix[i][j]) != 1) return 1;
        for (int d = 0; d < rows + cols - 1; d++) {
            int r = d < cols ? 0 : d - cols + 1;
            int c = d < cols ? d : cols - 1;
            while (r < rows && c >= 0) {
                printf("%d", matrix[r++][c--]);
                if (!(r == rows || (c < 0 && d == rows + cols - 2))) printf(" ");
            }
            if (d != rows + cols - 2) printf(" ");
        }
        printf("\n");
        return 0;
    }

    int **matrix = malloc((size_t)rows * sizeof *matrix);
    if (!matrix) return 1;
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc((size_t)cols * sizeof *matrix[i]);
        if (!matrix[i]) {
            for (int k = 0; k < i; k++) free(matrix[k]);
            free(matrix);
            return 1;
        }
    }
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (scanf("%d", &matrix[i][j]) != 1) {
                for (int k = 0; k < rows; k++) free(matrix[k]);
                free(matrix);
                return 1;
            }
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = d < cols ? 0 : d - cols + 1;
        int c = d < cols ? d : cols - 1;
        while (r < rows && c >= 0) {
            printf("%d", matrix[r++][c--]);
            if (!(r == rows || (c < 0 && d == rows + cols - 2))) printf(" ");
        }
        if (d != rows + cols - 2) printf(" ");
    }
    printf("\n");
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);
    return 0;
}
