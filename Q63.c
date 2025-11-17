#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int merged[size1 + size2];

    for (int i = 0; i < size1; i++) {
        merged[i] = array1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = array2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}