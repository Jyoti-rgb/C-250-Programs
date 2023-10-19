// ● Count the Number of Digits of an Integer

#include <stdio.h>
int main()
{
    int num, cout = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        cout++;
        num = num / 10;
    }
    printf("Count Number is: %d", cout);

    return 0;
}