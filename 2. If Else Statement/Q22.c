// ● Check whether a character is an uppercase or lowercase alphabet.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("%c is Lowercase Alphabet.", ch) : printf("%c is Uppercase Alphabet.", ch);
    return 0;
}
