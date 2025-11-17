#include <stdio.h>
#define BUF_SIZE 512

int main(void) {
    char line[BUF_SIZE];
    FILE *fp = fopen("info.txt", "r");
    if (!fp) {
        perror("Failed to open info.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        fputs(line, stdout);
    }

    fclose(fp);
    return 0;
}
