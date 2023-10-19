// ● Reverse a Number

#include <stdio.h>
int main()
{
    int num, rev = 0, remainder, a;
    printf("Enter the number: ");
    scanf("%d", &num);
    a = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    printf("%d of Reverse Number is: %d", a, rev);
    return 0;
}