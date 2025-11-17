#include <stdio.h>
#include <ctype.h>

int main(void) {
    const char *infile = "input.txt";
    const char *outfile = "output.txt";

    FILE *fin = fopen(infile, "r");
    if (!fin) {
        perror("Failed to open input.txt");
        return 1;
    }
    FILE *fout = fopen(outfile, "w");
    if (!fout) {
        perror("Failed to open output.txt");
        fclose(fin);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Converted lowercase to uppercase and wrote to '%s'.\n", outfile);
    return 0;
}
