#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0}, flag = 1;
    scanf("%s", str1);
    scanf("%s", str2);
    for (int i = 0; str1[i] != '\0'; i++)
        freq1[str1[i] - 'a']++;
    for (int i = 0; str2[i] != '\0'; i++)
        freq2[str2[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (freq1[i] != freq2[i])
            flag = 0;
    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}