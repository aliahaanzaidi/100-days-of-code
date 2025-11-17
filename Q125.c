#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260];
    char buffer[1024];

    printf("Enter filename to append to: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 1;
    filename[strcspn(filename, "\r\n")] = '\0';

    FILE *fp = fopen(filename, "a");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }

    printf("Enter a line to append: ");
    /* read the remainder of the input line (may include spaces) */
    if (!fgets(buffer, sizeof(buffer), stdin)) {
        fclose(fp);
        return 1;
    }
    /* If user typed nothing (e.g., leftover newline), prompt again */
    if (buffer[0] == '\n') {
        if (!fgets(buffer, sizeof(buffer), stdin)) { fclose(fp); return 1; }
    }

    /* ensure the appended text ends with a newline */
    size_t len = strlen(buffer);
    if (len == 0 || buffer[len-1] != '\n') {
        fputs(buffer, fp);
        fputc('\n', fp);
    } else {
        fputs(buffer, fp);
    }

    fclose(fp);
    printf("Text appended to '%s' successfully.\n", filename);
    return 0;
}
