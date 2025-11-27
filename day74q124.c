//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#define MAX_LENGTH 1000
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[MAX_LENGTH], destFilename[MAX_LENGTH];
    char ch;

    // Take source and destination filenames from the user
    printf("Enter source filename: ");
    fgets(sourceFilename, sizeof(sourceFilename), stdin);
    // Remove newline character from the filename
    sourceFilename[strcspn(sourceFilename, "\n")] = 0;

    printf("Enter destination filename: ");
    fgets(destFilename, sizeof(destFilename), stdin);
    // Remove newline character from the filename
    destFilename[strcspn(destFilename, "\n")] = 0;

    // Open the source file in read mode
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully.\n", sourceFilename, destFilename);

    return 0;
}
