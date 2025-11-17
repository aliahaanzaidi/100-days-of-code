#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *seen = (int*)calloc(n, sizeof(int));
    if (!seen) return 0;
    for (int i = 0; i < n; ++i) {
        int v;
        if (scanf("%d", &v) != 1) { free(seen); return 0; }
        if (v >= 0 && v < n && seen[v]) {
            printf("%d\n", v);
            free(seen);
            return 0;
        }
        if (v >= 0 && v < n) seen[v] = 1;
    }
    free(seen);
    return 0;
}
