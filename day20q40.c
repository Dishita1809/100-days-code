//Write a program to find the 1’s complement of a binary number and print it
#include <stdio.h>
void ones_complement(char binary[], char complement[]) {
    int i = 0;
    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            complement[i] = '1';
        } else if (binary[i] == '1') {
            complement[i] = '0';
        } else {
            // Invalid character in binary string
            complement[i] = '\0';
            return;
        }
        i++;
    }
    complement[i] = '\0'; // Null-terminate the complement string
}
int main() {
    char binary[65]; // Assuming a maximum of 64 bits for the binary number
    char complement[65];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    ones_complement(binary, complement);
    
    if (complement[0] != '\0') {
        printf("1's complement of %s is: %s\n", binary, complement);
    } else {
        printf("Invalid binary number entered.\n");
    }
    
    return 0;
}
