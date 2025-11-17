#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename to open: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 1;
    filename[strcspn(filename, "\r\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        fprintf(stderr, "Error: could not open '%s'\n", filename);
        return 1;
    }

    char buffer[512];
    while (fgets(buffer, sizeof(buffer), fp)) {
        fputs(buffer, stdout);
    }

    fclose(fp);
    return 0;
}
