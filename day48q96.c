//Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>
void reverseWord(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
void reverseSentence(char* sentence) {
    char* wordStart = sentence;
    char* temp = sentence;

    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }
}
int main() {
    char sentence[] = "Hello World from C Programming";
    printf("Original Sentence: %s\n", sentence);
    reverseSentence(sentence);
    printf("Reversed Words Sentence: %s\n", sentence);
    return 0;
}
