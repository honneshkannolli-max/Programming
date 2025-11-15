#include <stdio.h>

int main()
{
    int periodtiming;

    printf("Enter the period timing(9:00 AM - 3:00 PM):");
    scanf("%d",&periodtiming);

    switch(periodtiming)
    {
        case 9:00;
        printf("Kannada\n");
        break;

        case 10:00;
        printf("Computer Organization\n");
        break;

        case 11:00;
        printf("Physics\n");
        break;

        case 12:00;
        printf("Linux\n");
        break;

        case 1:00;
        printf("CMAT\n");
        break;

        case 2:00;
        printf("C-P Lab\n");
        break;

        case 3:00;
        printf("C-Programming\n");
        break;

        default:
        printf("Invalid period timing\n");
        break;
    }
    return 0;

    }
