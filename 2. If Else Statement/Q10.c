// ● Leap Year

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a Leap Year", year);
            }
            else
            {

                printf("%d is not Leap Year", year);
            }
        }
        else
        {
            printf("%d is a Leap Year", year);
        }
    }
    else
    {
        printf("%d  is not Leap Year", year);
    }

    return 0;
}