//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum MenuChoices {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() {
    enum MenuChoices choice;
    int a = 10, b = 5;
    for(choice = ADD; choice <= MULTIPLY; choice++) {
        switch(choice) {
            case ADD:
                printf("Add: %d + %d = %d\n", a, b, a + b);
                break;
            case SUBTRACT:
                printf("Subtract: %d - %d = %d\n", a, b, a - b);
                break;
            case MULTIPLY:
                printf("Multiply: %d * %d = %d\n", a, b, a * b);
                break;
        }
    }
    return 0;
}
