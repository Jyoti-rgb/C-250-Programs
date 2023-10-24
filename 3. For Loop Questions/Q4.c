// ● Find the GCD of two Numbers Using

#include <stdio.h>
int main()
{
    int n1, n2, gcd;
    printf("Enter Two Number: ");
    scanf("%d%d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++) // n1 or n2 both are check that both is less than i
    {
        if (n1 % i == 0 && n2 % i == 0) // n1 or n2 remainder should be 0
            gcd = i;
    }
    printf("GCD is: %d", gcd);

    return 0;
}