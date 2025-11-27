//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Status {
    SUCCESS = 1,
    FAILURE = 0,
    TIMEOUT = -1
};
int main() {
    enum Status s;
    for(s = SUCCESS; s >= TIMEOUT; s--) {
        printf("Status %d: %d\n", s, s);
    }
    return 0;
}
