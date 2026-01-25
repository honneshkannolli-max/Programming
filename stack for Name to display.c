#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}
void pop() {
    if (top >= 0) {
        top--;
    }
}
void display() {
    for (int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    printf("\n");
}
int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = 0;

    for (int i = 0; i < strlen(name); i++) {
        push(name[i]);
    }

    display();
    printf("Your name in original order: ");
    while (top >= 0) {
        printf("%c", stack[top]);
        pop();
    }
    printf("\n");
    return 0;
}

