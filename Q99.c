#include <stdio.h>
#include <string.h>

int main() {
    char date[20], result[30];
    scanf("%s", date);
    strncpy(result, date, 3);
    result[2] = '\0';
    strcat(result, "Apr");
    strcat(result, "-");
    strcat(result, date + 6);
    printf("%s\n", result);
    return 0;
}