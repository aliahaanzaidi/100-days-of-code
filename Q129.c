#include <stdio.h>

int main(void) {
    const char *fname = "numbers.txt";
    FILE *fp = fopen(fname, "r");
    if (!fp) {
        perror("Failed to open numbers.txt");
        return 1;
    }

    long sum = 0;
    long count = 0;
    int num;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in %s\n", fname);
    } else {
        double avg = (double)sum / (double)count;
        printf("Sum: %ld\nAverage: %.2f\n", sum, avg);
    }

    return 0;
}
