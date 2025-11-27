//Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
#include <stdio.h>
int main() {
    int lateDays;
    int fine = 0;

    // Input number of late days
    printf("Enter the number of days the book is late: ");
    scanf("%d", &lateDays);

    // Calculate fine based on late days
    if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine: ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Fine: ₹%d\n", fine);
    } else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Fine: ₹%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
