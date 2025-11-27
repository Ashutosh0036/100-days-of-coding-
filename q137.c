//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role role;

    scanf("%s", input);


    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else 
        role = GUEST;


    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}