// ● Find whether a number is even or odd.

// With Ternary operation

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("Even Number: %d", a) : printf("Odd Number: %d", a);
    return 0;
}