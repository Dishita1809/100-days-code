//Write a program to print the following pattern:
    5
   45
  345
 2345
12345
#include <stdio.h>
int main() {
    int i, j, k, n = 5;

    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers
        for(k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
