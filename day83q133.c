//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Months {
    JANUARY = 31,
    FEBRUARY = 28,
    MARCH = 31,
    APRIL = 30,
    MAY = 31,
    JUNE = 30,
    JULY = 31,
    AUGUST = 31,
    SEPTEMBER = 30,
    OCTOBER = 31,
    NOVEMBER = 30,
    DECEMBER = 31
};
int main() {
    enum Months month;
    for(month = JANUARY; month <= DECEMBER; month++) {
        printf("Month %d has %d days.\n", month, month);
    }
    return 0;
}
