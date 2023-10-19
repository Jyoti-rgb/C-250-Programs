// ● Check whether a character is an alphabet or not.

// With Conditional operator
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("%c is Alphabet", ch) : printf("%c is not Alphabet.", ch);
    return 0;
}