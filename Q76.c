#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, symmetric = 1;
    if (scanf("%d", &n) != 1) return 1;
    int **matrix = malloc((size_t)n * sizeof *matrix);
    if (!matrix) return 1;
    for (int i = 0; i < n; i++) {
    matrix[i] = malloc((size_t)n * sizeof *matrix[i]);
        if (!matrix[i]) {
            for (int k = 0; k < i; k++) free(matrix[k]);
            free(matrix);
            return 1;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i])
                symmetric = 0;
    if (symmetric)
        printf("Yes\n");
    else
        printf("No\n");
    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
    return 0;
}