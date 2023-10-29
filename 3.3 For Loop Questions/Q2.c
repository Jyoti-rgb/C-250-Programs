// ● Print Multiplication Table Using

#include <stdio.h>
int main()
{
    int num, tables;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        tables = num * i;
        printf("%d\n", tables);
    }
    return 0;
}