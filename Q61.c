#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}