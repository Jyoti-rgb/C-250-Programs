// ● Find the maximum between two numbers.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the Two Number: ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("Maximum Number is: %d", a);
    }
    else
    {
        printf("Maximum Number is: %d", b);
    }

    return 0;
}