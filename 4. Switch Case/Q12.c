// ● Check whether a number is positive, negative or zero using a switch case.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    switch (n > 0)
    {
    case 0:
        switch (n < 0)
        {
        case 1:
            printf("Number is Negative: %d", n);
            break;
        case 0:
            printf("Number is Zero: %d", n);
            break;
        }
        break;
    case 1:
        printf("Number is Positive: %d", n);
        break;
    }
    return 0;
}