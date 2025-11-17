#include <stdio.h>
#include <string.h>

int main(void) {
    char src[260], dst[260];
    printf("Enter source filename: ");
    if (!fgets(src, sizeof(src), stdin)) return 1;
    src[strcspn(src, "\r\n")] = '\0';

    printf("Enter destination filename: ");
    if (!fgets(dst, sizeof(dst), stdin)) return 1;
    dst[strcspn(dst, "\r\n")] = '\0';

    FILE *fs = fopen(src, "r");
    if (!fs) {
        perror("Failed to open source file");
        return 1;
    }
    FILE *fd = fopen(dst, "w");
    if (!fd) {
        perror("Failed to open destination file");
        fclose(fs);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);
    printf("File copied from '%s' to '%s' successfully.\n", src, dst);
    return 0;
}
