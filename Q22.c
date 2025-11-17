#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        percent = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage: %.2f%%\n", percent);
    } else if (costPrice > sellingPrice) {
        percent = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage: %.2f%%\n", percent);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}