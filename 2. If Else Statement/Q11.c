// ● The Date Is Correct or Not
#include <stdio.h>
int main()
{
    int dd, mm, yy;
    printf("Enter Valid dd,mm,yy: ");
    scanf("%d%d%d", &dd, &mm, &yy);

    if (yy >= 1900 && yy <= 9999)
    {
        if (mm >= 1 && mm <= 12)
        {
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
            {
                printf("Date is Valid: %d/%d/%d\n", dd, mm, yy);
            }
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
            {
                printf("Date is Valid: %d/%d/%d\n", dd, mm, yy);
            }
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
            {
                printf("Date is Valid: %d/%d/%d\n", dd, mm, yy);
            }
            else
            {
                printf("Date is not Valid: %d/%d/%d\n", dd, mm, yy);
            }
        }
        else
        {
            printf("Month is not Valid: %d/%d/%d\n", dd, mm, yy);
        }
    }
    else
    {
        printf("Year is not Valid: %d/%d/%d\n", dd, mm, yy);
    }

    return 0;
}