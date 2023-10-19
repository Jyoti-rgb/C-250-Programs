// ● Calculate the Sum of Natural Numbers

// input n=10;
// output=1+2+3+4+5+6+7+8+9+10=55;
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;

    } while (i <= n);

    printf("%d", sum);

    return 0;
}