#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, flag = 1;
    scanf("%s", str);
    while (str[len] != '\0')
        len++;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
