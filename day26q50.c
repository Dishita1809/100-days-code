//Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
#include <stdio.h>
void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = i; k <= n; k++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int size = 5; // Number of rows in the pattern
    
    print_pattern(size);
    
    return 0;
}
