// ● Check whether a number is even or odd using a switch case.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    switch (n % 2 == 0)
    {
    case 0:
        printf("Number is Odd: %d", n);

        break;
    case 1:
        printf("Number is Even: %d", n);

        break;
    }
    return 0;
}