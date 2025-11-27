//Store details of 5 students in an array of structures and print all
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    
    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
