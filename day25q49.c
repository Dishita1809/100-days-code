//Write a program to print the following pattern:
5
45
345
2345
12345
#include <stdio.h>
void print_pattern(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main() {
    int size = 5; // Number of rows in the pattern
    
    print_pattern(size);
    
    return 0;
}
