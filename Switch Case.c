#include <stdio.h>

int main()
{
    int period_timing;

    printf("Enter the period timing:");
    scanf("%d",&period_timing);

    switch(period_timing)
    {
        case 1:
        printf("period-Kannada\n");
        printf("Time-9:00AM\n");
        break;

        case 2:
        printf("period-Computer Organization\n");
        printf("Time-10:00AM");
        break;

        case 3:
        printf("period-Physics\n");
        printf("Time-11:00AM\n");
        break;

        case 4:
        printf("period-Linux\n");
        printf("12:00PM\n");
        break;

        case 5:
        printf("period-CMAT\n");
        printf("Time-1:00PM\n");
        break;

        case 6:
        printf("period-C-P Lab\n");
        printf("Time-2:00PM\n");
        break;

        case 7:
        printf("period-C-Programming\n");
        printf("Time-3:00PM\n");
        break;

        default:
        printf("Invalid period timing\n");
        break;
    }
    return 0;

    }
