#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100];
    int i = 0, j = 0;
    scanf(" %[^\n]", str);
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            printf("%c. ", word[0]);
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    printf("%s\n", word);
    return 0;
}