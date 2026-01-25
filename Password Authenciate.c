#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    char u[20], p[20];

    // Create username and password
    printf("Create Username: ");
    scanf("%s", username);

    printf("Create Password: ");
    scanf("%s", password);

    // Login
    printf("\n******Login******\n");
    printf("Enter Username: ");
    scanf("%s", u);

    printf("Enter Password: ");
    scanf("%s", p);

    // Authentication
    if (strcmp(username, u) == 0 && strcmp(password, p) == 0) {
        printf("\n Access Granted. Welcome to the system. Mr %s\n",username);
    } else {
        printf("\n Access Denied. Invalid Username or Password.\n");
    }

    return 0;
}
