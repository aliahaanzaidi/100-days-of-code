#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int roll;
    float marks;
    int n;

    printf("How many student records do you want to enter? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid number of students.\n");
        return 1;
    }
    /* consume newline left by scanf */
    int c = getchar(); (void)c;

    FILE *fp = fopen("students.txt", "w");
    if (!fp) {
        perror("Failed to open students.txt for writing");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("\nStudent %d name: ", i+1);
        if (!fgets(name, sizeof(name), stdin)) {
            fprintf(stderr, "Failed to read name.\n");
            fclose(fp);
            return 1;
        }
        /* strip newline */
        name[strcspn(name, "\r\n")] = '\0';

        printf("Student %d roll number: ", i+1);
        if (scanf("%d", &roll) != 1) {
            fprintf(stderr, "Invalid roll number.\n");
            fclose(fp);
            return 1;
        }

        printf("Student %d marks: ", i+1);
        if (scanf("%f", &marks) != 1) {
            fprintf(stderr, "Invalid marks.\n");
            fclose(fp);
            return 1;
        }
        /* consume newline before next fgets */
        int d = getchar(); (void)d;

        /* write as semicolon-separated: name;roll;marks\n */
        fprintf(fp, "%s;%d;%.2f\n", name, roll, marks);
    }

    fclose(fp);
    printf("\n%d record(s) saved to students.txt\n\n", n);

    /* Read them back using fscanf() and display */
    fp = fopen("students.txt", "r");
    if (!fp) {
        perror("Failed to open students.txt for reading");
        return 1;
    }

    printf("Reading records from students.txt:\n\n");
    while (fscanf(fp, " %99[^;];%d;%f", name, &roll, &marks) == 3) {
        printf("Name : %s\n", name);
        printf("Roll : %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);
    return 0;
}
