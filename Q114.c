#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);
    int last[256];
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }
    int max_len = 0, start = 0;
    for (int i = 0; s[i]; i++) {
        if (last[(int)s[i]] >= start) {
            start = last[(int)s[i]] + 1;
        }
        last[(int)s[i]] = i;
        if (i - start + 1 > max_len) {
            max_len = i - start + 1;
        }
    }
    printf("%d", max_len);
    return 0;
}