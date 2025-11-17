#include <stdio.h>

int main() {
    int lateDays, fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays <= 0) {
        printf("No fine.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Library fine: ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Library fine: ₹%d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Library fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}