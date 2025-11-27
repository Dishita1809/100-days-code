//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee emp;
    FILE *file;

    // Reading employee data
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Writing employee data to binary file
    file = fopen("employee.dat", "wb");
    if (file != NULL) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
        printf("Employee data written to file successfully.\n");
    } else {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Reading employee data from binary file
    struct Employee emp_read;
    file = fopen("employee.dat", "rb");
    if (file != NULL) {
        fread(&emp_read, sizeof(struct Employee), 1, file);
        fclose(file);

        // Printing read employee data
        printf("\nEmployee Details from File:\n");
        printf("Name: %s", emp_read.name);
        printf("ID: %d\n", emp_read.id);
        printf("Salary: %.2f\n", emp_read.salary);
    } else {
        printf("Error opening file for reading.\n");
        return 1;
    }

    return 0;
}
