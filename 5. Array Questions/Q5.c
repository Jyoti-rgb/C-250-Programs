// ● Check String Is Palindrome Or Not Using For Loop

#include <stdio.h>
#include <string.h>
int main()
{
    int length, i, j, flag = 1;
    char a[50];
    printf("Enter the String: \n");
    gets(a);
    length = strlen(a);
    for (i = 0; i < length; i++)
    {
        if (a[i] != a[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Palindrome.....");
    }
    else
    {
        printf("Not Palindrome.....");
    }

    return 0;
}