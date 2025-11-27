//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender {
    MALE,
    FEMALE
};
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p1 = {"Alice", FEMALE};
    struct Person p2 = {"Bob", MALE};

    printf("%s is %s\n", p1.name, (p1.gender == MALE) ? "Male" : "Female");
    printf("%s is %s\n", p2.name, (p2.gender == MALE) ? "Male" : "Female");

    return 0;
}
