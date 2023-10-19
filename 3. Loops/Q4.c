// ● Display Fibonacci Series

#include <stdio.h>
int main()
{
    int n, last1 = 0, last2 = 1, sum = 0;
    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", last1, last2);
    do
    {
        sum = last1 + last2;
        printf("%d ", sum);
        last1 = last2;
        last2 = sum;
        sum = last1 + last2;

    } while (sum <= n);

    return 0;
}
