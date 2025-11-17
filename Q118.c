#include <stdio.h>
int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long long expected = (long long)n * (n + 1) / 2;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        if (scanf("%d", &x) != 1) return 0;
        sum += x;
    }
    printf("%lld\n", expected - sum);
    return 0;
}
