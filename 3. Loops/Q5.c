// ● Find the LCM of two Numbers

#include <stdio.h>
int main()
{
    int n1, n2, max;
    printf("Enter Two Number: ");
    scanf("%d%d", &n1, &n2);
    max = (n1 > n1) ? n1 : n2;

    while (1)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            printf("%d , %d LCM is: %d", n1, n2, max);
            break;
        }
        max++;
    }
    return 0;
}