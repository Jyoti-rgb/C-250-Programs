// ● Convert All Input String Simultaneously Into Asterisk ( * )

#include <stdio.h>
#include <conio.h>
int main()
{
    char c = 'A';
    int i = 0;
    printf("Enter the String:");
    while (c)
    {
        c = getch();
        printf("*");
    }

    return 0;
}