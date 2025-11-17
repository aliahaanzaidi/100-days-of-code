#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>

int main(void) {
    char input[100];
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input\n");
        return 1;
    }
    
    char *endptr;
    errno = 0;
    int64_t x = strtoll(input, &endptr, 10);
    
    if (errno == ERANGE || errno == EINVAL || endptr == input || *endptr != '\n') {
        printf("Error: Invalid number\n");
        return 1;
    }

    if (x == 0) {
        printf("0\n");
        return 0;
    }

    int counts[10] = {0};
    uint64_t y = (uint64_t)(x < 0 ? -x : x);
    while (y > 0) {
        counts[y % 10]++;
        y /= 10;
    }

    int best_digit = 0;
    int best_count = counts[0];
    for (int d = 1; d < 10; d++) {
        if (counts[d] > best_count) {
            best_count = counts[d];
            best_digit = d;
        }
        // tie-breaker: keep first (smallest) digit encountered with max count
    }

    printf("%d\n", best_digit);
    return 0;
}
