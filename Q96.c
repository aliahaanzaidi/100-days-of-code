#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int i = 0, start = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }
    if (start < i)
        reverse(str, start, i - 1);
    printf("%s", str);
    return 0;
}