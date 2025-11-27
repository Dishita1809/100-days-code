//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#define MAX_LENGTH 100
struct Student {
    char name[MAX_LENGTH];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file;
    struct Student student;
    int n, i;

    // Take number of students from user
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open the file in write mode to store student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Input student records and write to file
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        printf("Marks: ");
        scanf("%f", &student.marks);

        fprintf(file, "%s %d %.2f\n", student.name, student.rollNumber, student.marks);
    }

    // Close the file after writing
    fclose(file);

    // Open the file in read mode to display student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("-----------------\n");

    // Read and display each student record
    while (fscanf(file, "%s %d %f", student.name, &student.rollNumber, &student.marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", student.name, student.rollNumber, student.marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
