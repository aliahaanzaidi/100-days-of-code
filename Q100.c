#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);
    size_t len = strlen(str);
    for (size_t i = 0; i < len; i++) {
        for (size_t j = i; j < len; j++) {
            for (size_t k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }
    return 0;
}