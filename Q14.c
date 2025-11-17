#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert uppercase to lowercase for simplicity
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
