#include <stdio.h>

int main() {
    int i, j, space, stars;
    for (i = 1; i <= 4; i++) {
        space = 4 - i;
        stars = 2 * i - 1;
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 3; i >= 1; i--) {
        space = 4 - i;
        stars = 2 * i - 1;
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}