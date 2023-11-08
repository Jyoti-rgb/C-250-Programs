// C code to illustrate working of
// getch() to accept hidden inputs

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i, length;
    char pwd[10];
    printf("Enter the Password: ");
    for (i = 0; i < 8; i++)
    {
        pwd[i] = getch();
        printf("*");
    }

    // pwd[i] = '\0';   ('\0' only use for get length of array)
    length = strlen(pwd);

    printf("\n");

    // printf("Entered password: ");
    // for (i = 0; pwd[i] != '\0'; i++)
    //     printf("%c", pwd[i]);

    printf("Enter Password: ");
    for (i = 0; i < length; i++)
    {
        printf("%c", pwd[i]);
    }

    return 0;
}
