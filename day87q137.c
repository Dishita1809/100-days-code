//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    enum UserRole role;
    for(role = ADMIN; role <= GUEST; role++) {
        printf("Role %d: %s\n", role, 
            (role == ADMIN) ? "Admin Access" :
            (role == USER) ? "User Access" :
            "Guest Access");
    }
    return 0;
}
