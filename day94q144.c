//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printStudent(student);

    return 0;
}
