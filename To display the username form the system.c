#include <stdio.h>
#include <string.h>

int main() {
    char username[10];
    char password[8];
    char correctPassword[] = "GCU123";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, correctPassword) == 0) {
        printf("Access Granted \n");
        printf("Login Approved\n");
    } else {
        printf("Wrong Password \n");
    }

    return 0;
}











