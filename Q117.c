#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d", &m);
    int *a = malloc((size_t)m * sizeof *a);
    if (!a) return 1;
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    int *b = malloc((size_t)n * sizeof *b);
    if (!b) { free(a); return 1; }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int *merged = malloc((size_t)(m + n) * sizeof *merged);
    if (!merged) { free(a); free(b); return 1; }
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", merged[idx]);
    }
    free(a); free(b); free(merged);
    return 0;
}