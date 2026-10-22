#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Input from user
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(fp, "Name: %s", name);
    fprintf(fp, "Age: %d\n", age);

    // Close file
    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}