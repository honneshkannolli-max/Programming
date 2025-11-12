#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    time(&currentTime);
    printf("CURRENT  DATE AND TIME: %s", ctime(&currentTime));
    return 0;
}
