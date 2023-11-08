// ● Print “I am Excellent” Instead Of Your Name Using Array

#include <stdio.h>
#include <conio.h>
int main()
{
    char a[] = "I am Excellent";
    char c = 'A';
    int i = 0;
    printf("Enter Your Name: \n\n");
    while (c)
    {
        c = getch();
        printf("%c", a[i]);
        i++;
        if (i == 14)
        {
            printf(". ");
            i = 0;
        }
    }

    return 0;
}