//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int count) {
    struct Student top_student = students[0];
    for(int i = 1; i < count; i++) {
        if(students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }
    return top_student;
}
int main() {
    struct Student students[5];

    // Reading data for 5 students
    for(int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar(); // To consume the newline character left by scanf
    }

    // Getting the top student
    struct Student top_student = getTopStudent(students, 5);

    // Printing the top student's details
    printf("\nTop Student Details:\n");
    printf("Name: %s", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
