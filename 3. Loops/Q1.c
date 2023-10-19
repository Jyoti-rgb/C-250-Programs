// ● Reverse A given Number
#include <stdio.h>

int reverse()
{
    int rev = 0, num, remainder;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }

    return rev;
}

int main()
{
    int rev = reverse();
    printf("Reverse Number is: %d", rev);
    return 0;
}