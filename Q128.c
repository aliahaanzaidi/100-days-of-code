#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[260];
    printf("Enter filename to analyze vowels/consonants: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 1;
    filename[strcspn(filename, "\r\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }

    long vowels = 0, consonants = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            int lo = tolower(ch);
            if (lo == 'a' || lo == 'e' || lo == 'i' || lo == 'o' || lo == 'u') vowels++;
            else consonants++;
        }
    }

    fclose(fp);
    printf("Vowels: %ld\nConsonants: %ld\n", vowels, consonants);
    return 0;
}
