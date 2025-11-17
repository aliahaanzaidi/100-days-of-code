#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename to analyze: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 1;
    filename[strcspn(filename, "\r\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }

    long chars = 0, words = 0, lines = 0;
    int ch;
    int in_word = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (!isspace(ch)) {
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else {
            in_word = 0;
        }
    }

    /* If file is non-empty and doesn't end with a newline, lines should count last line */
    if (chars > 0) {
        /* lines already incremented for '\n' occurrences; if last char wasn't '\n', add 1 */
        fseek(fp, -1, SEEK_END);
        if (ftell(fp) >= 0) {
            int last = fgetc(fp);
            if (last != '\n') lines++;
        }
    }

    fclose(fp);

    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
    return 0;
}
