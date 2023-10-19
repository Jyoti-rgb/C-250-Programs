// ● Check whether a number is negative, positive or zero.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Number is Positive: %d", num);
    }
    else if (num < 0)
    {
        printf("Number is Negative: %d", num);
    }
    else
    {
        printf("Number is Zero: %d", num);
    }

    return 0;
}