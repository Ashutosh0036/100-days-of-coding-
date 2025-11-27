//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;

    scanf("%s", input);  

    
    char *value = strchr(input, '=');
    value++;  

    if (strcmp(value, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}