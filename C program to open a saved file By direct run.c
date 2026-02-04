#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char filename[] = "C:\\Users\\Dell\\Downloads\\Physics Lab\\Phy & lab Exp\\PhotoElectric effect.pdf";
    char command[300];

    printf("Opening file...\n");

    sprintf(command, "cmd /c start \"\" \"%s\"", filename);
    system(command);

    return 0;
}
