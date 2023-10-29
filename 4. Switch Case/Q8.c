// ● Print the total number of days in a month using a switch case.

#include <stdio.h>

void months()
{
    int month;
    printf("Input Month: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Today Day in Month is 31");
        break;
    case 4:
    case 6:
    case 9:
    case 11:

        printf("Total Days in Month is 30");
        break;
    case 2:
        printf("Total Days in Month is 28-29");
        break;
    default:
        printf("Input Months 1-12");
    }
}

int main()
{

    months();
    return 0;
}