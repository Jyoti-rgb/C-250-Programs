// ● Print A Calendar Taking Input From User Using Loop

#include <stdio.h>
int main()
{
    int days, month, weekday, start = 1;
    printf("Enter the day of Month: ");
    scanf("%d", &days); // input month days
    printf("Enter 0 is Monday.\n");
    printf("Enter 1 is Tuesday.\n");
    printf("Enter 2 is Wednesday.\n");
    printf("Enter 3 is Thursday.\n");
    printf("Enter 4 is Friday.\n");
    printf("Enter 5 is Saturday.\n");
    printf("Enter 6 is Sunday.\n\n");
    printf("Choose the number b/w 0 to 5: ");
    scanf("%d", &weekday); // input which day start from in month

    printf("\nMon\t Tue\t Wed\t Thu\t Fri\t Sat\t Sun\n");
    printf("_____________________________________________________\n\n");

    for (int i = weekday; i > 0; i--) // leave tab which is start from weekday number
    {
        printf("\t");
    }
    while (start <= days) // start loop while(1>= 31)
    {
        if (weekday > 0 && weekday % 7 == 0) // check if(4>0 && 4%7==0) condition true
        {

            printf("\n"); // take next line
        }
        printf("%d\t", start); // print 1
        weekday++;             // weekday=4 > 5
        start++;               // start =1 > 2
    }

    return 0;
}