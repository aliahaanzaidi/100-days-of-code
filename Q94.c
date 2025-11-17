#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (j > maxLen)
        strcpy(longest, word);
    printf("%s\n", longest);
    return 0;
}