//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
void changeDateFormat(const char* date) {
    const char* monthAbbr[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    char day[3], month[3], year[5];
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    int monthIndex = atoi(month) - 1;
    if (monthIndex < 0 || monthIndex > 11) {
        printf("Invalid month in date.\n");
        return;
    }

    printf("Formatted Date: %s-%s-%s\n", day, monthAbbr[monthIndex], year);
}
int main() {
    const char* date = "15/04/2023";
    printf("Original Date: %s\n", date);
    changeDateFormat(date);
    return 0;
}
