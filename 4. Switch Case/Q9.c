// ● Check whether an alphabet is a vowel or consonant using a switch case.

#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Alphabets: ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is Vowel: %c", c);
        break;

    default:
        printf("It is Consonant: %c", c);
        }

    return 0;
}