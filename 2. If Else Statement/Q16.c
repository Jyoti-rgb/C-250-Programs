// ● Check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("Number is Divisible by 5: %d", num);
    }
    else if (num % 11 == 0)
    {
        printf("Number is Divisible by 11: %d", num);
    }
    else
    {
        printf("Not Divisible By 5 and 11: %d", num);
    }
    return 0;
}