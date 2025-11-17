#include <stdio.h>
#include <string.h>

int isRotation(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2))
        return 0;
    char temp[2000];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    char str1[1000], str2[1000];
    scanf("%s", str1);
    scanf("%s", str2);
    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}