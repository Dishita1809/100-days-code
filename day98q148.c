//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};  
int main() {
    struct Student student1, student2;

    // Reading data for first student
    printf("Enter name for student 1: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter roll number for student 1: ");
    scanf("%d", &student1.roll_no);
    printf("Enter marks for student 1: ");
    scanf("%f", &student1.marks);
    getchar(); // To consume the newline character left by scanf

    // Reading data for second student
    printf("Enter name for student 2: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("Enter roll number for student 2: ");
    scanf("%d", &student2.roll_no);
    printf("Enter marks for student 2: ");
    scanf("%f", &student2.marks);

    // Checking if the two students are identical
    if (strcmp(student1.name, student2.name) == 0 &&
        student1.roll_no == student2.roll_no &&
        student1.marks == student2.marks) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are not identical.\n");
    }

    return 0;
}
