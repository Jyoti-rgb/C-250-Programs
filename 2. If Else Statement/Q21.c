// ● Input any character and check whether it is the alphabet, digit or special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter The Character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is a Alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a Digit.", ch);
    }
    else
    {
        printf("%c is a Special Character.", ch);
    }
    return 0;
}
