//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status status;
    for(status = SUCCESS; status <= TIMEOUT; status++) {
        printf("Status %d: %s\n", status, 
            (status == SUCCESS) ? "SUCCESS" :
            (status == FAILURE) ? "FAILURE" :
            "TIMEOUT");
    }
    return 0;
}
