#include <stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);
    int matrix[n][n], diag[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < n; i++)
        diag[i] = matrix[i][i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (diag[i] == diag[j])
                flag = 0;
    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
