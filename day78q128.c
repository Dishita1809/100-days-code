//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 1000
int main() {
    FILE *file;
    char ch;
    int vowelCount = 0, consonantCount = 0;

    // Open the file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for easier comparison

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
        // Check if the character is a consonant
        else if (ch >= 'a' && ch <= 'z') {
            consonantCount++;
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Total Vowels: %d\n", vowelCount);
    printf("Total Consonants: %d\n", consonantCount);

    return 0;
}
