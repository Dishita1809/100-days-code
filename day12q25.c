//Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
#include <stdio.h>
int main() {
    int units;
    float billAmount = 0.0;

    // Input number of units consumed
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Calculate bill amount based on units consumed
    if (units <= 100) {
        billAmount = units * 5.0;
    } else if (units <= 200) {
        billAmount = (100 * 5.0) + ((units - 100) * 7.0);
    } else if (units <= 300) {
        billAmount = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
    } else {
        billAmount = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
    }

    // Display the total bill amount
    printf("Total Electricity Bill: ₹%.2f\n", billAmount);

    return 0;
}
