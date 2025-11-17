#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i = 0, j = 0;
    scanf("%s", str);
    while (str[i] != '\0') {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
        i++;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return 0;
}