#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                matrix[i][j] = 0;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    printf("%d\n", sum);

    for (int i = 0; i < n; i++) free(matrix[i]);
    free(matrix);
    return 0;
}