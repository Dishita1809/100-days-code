//Write a program to print the following pattern:
*****
*****
*****
*****
*****
#include <stdio.h>
void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int size = 5; // Size of the pattern
    
    print_pattern(size);
    
    return 0;
}
