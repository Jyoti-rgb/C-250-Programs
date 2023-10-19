// ● Check Whether a Number is A Palindrome or Not

#include <stdio.h>
int main()
{
    int num, original, remainder, reverse = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    original = num;
    do
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;

    } while (num != 0);

    if (reverse == original)
    {
        printf("Yes, %d is A Palindrome Number.", original);
    }
    else
    {
        printf("No, %d is Not A Palindrome Number.", original);
    }

    return 0;
}