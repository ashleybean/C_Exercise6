#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    const char correct[] = "correct_password";

    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correct) != 0) {
            printf("Incorrect password.\n");
        }
    } while (strcmp(password, correct) != 0);

    printf("Access granted!\n");
    return 0;
}
