#include <stdio.h>
#include <ctype.h>
int main(void) {
    char buf[10000];
    if (!fgets(buf, sizeof(buf), stdin)) return 0;
    int i = 0;
    int started = 0;
    while (buf[i]) {
        if (!started && isalpha((unsigned char)buf[i])) {
            buf[i] = toupper((unsigned char)buf[i]);
            started = 1;
        } else {
            buf[i] = tolower((unsigned char)buf[i]);
        }
        ++i;
    }
    printf("%s", buf);
    return 0;
}
