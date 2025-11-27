//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};
int main() {
    struct Employee employee;

    // Reading employee data
    printf("Enter employee name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    printf("Enter employee ID: ");
    scanf("%d", &employee.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &employee.joining_date.day, &employee.joining_date.month, &employee.joining_date.year);

    // Printing employee data
    printf("\nEmployee Details:\n");
    printf("Name: %s", employee.name);
    printf("ID: %d\n", employee.id);
    printf("Joining Date: %02d/%02d/%04d\n", employee.joining_date.day, employee.joining_date.month, employee.joining_date.year);

    return 0;
}
