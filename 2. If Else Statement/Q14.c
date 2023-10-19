// ● Find the maximum between the three numbers.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the Three Number: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("Maximum Number is A: %d", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("Maximum Number is B: %d", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("Maximum Number is C: %d", c);
    }
    else
    {
        printf("Maximum Number is D: %d", d);
    }

    return 0;
}