#include <stdio.h>

int main() {
    int n, i, j, num = 1, temp;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        temp = num + i - 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", temp);
            temp--;
        }
        num += i;
        printf("\n");
    }
    return 0;
}
