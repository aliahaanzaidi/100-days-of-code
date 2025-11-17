#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int age;
    FILE *fp = fopen("info.txt", "w");
    if (!fp) {
        perror("Failed to open info.txt");
        return 1;
    }

    printf("Enter your name: ");
    if (!fgets(name, sizeof(name), stdin)) {
        fprintf(stderr, "Failed to read name\n");
        fclose(fp);
        return 1;
    }
    /* remove trailing newline */
    name[strcspn(name, "\r\n")] = '\0';

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        fprintf(stderr, "Invalid age\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
