//Write a program to print the following pattern:
1
12
123
1234
12345
#include <stdio.h>
void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
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
