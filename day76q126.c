//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content
#include <stdio.h>
#define MAX_LENGTH 1000
int main() {
    FILE *file;
    char filename[MAX_LENGTH];
    char ch;

    // Take filename from the user
    printf("Enter the filename to open: ");
    fgets(filename, sizeof(filename), stdin);
    // Remove newline character from the filename
    filename[strcspn(filename, "\n")] = 0;

    // Try to open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // Read and display the content of the file
    printf("Contents of '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
