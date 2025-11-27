//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};
int main() {
    enum Colors color;
    for(color = RED; color <= ORANGE; color++) {
        printf("Color %d: %d\n", color, color);
    }
    return 0;
}
    
