//Find and print the student with the highest marks
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];
    struct Student top_student;
    float highest_marks = -1.0;

    // Reading data for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar(); // To consume the newline character left by scanf

        // Check for highest marks
        if(students[i].marks > highest_marks) {
            highest_marks = students[i].marks;
            top_student = students[i];
        }
    }

    // Printing the student with the highest marks
    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
