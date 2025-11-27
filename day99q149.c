//Use malloc() to allocate structure memory dynamically and print details
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student *student;

    // Allocating memory for a Student structure
    student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Reading student data
    printf("Enter name: ");
    fgets(student->name, sizeof(student->name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student->roll_no);
    printf("Enter marks: ");
    scanf("%f", &student->marks);

    // Printing student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);

    // Freeing allocated memory
    free(student);

    return 0;
}
