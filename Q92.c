#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}, found = 0;
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
            freq[str[i] - 'a']++;
        }
    }
    if (!found)
        printf("None\n");
    return 0;
}