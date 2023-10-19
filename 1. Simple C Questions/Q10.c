// ● Factorial of a Given Number

#include<stdio.h>

int main()
{
    int number,factorial=1;
    printf("Enter the Number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
       factorial= factorial *i;
    }
    printf("Factorial of %d is: %d",number, factorial);

    return 0;
}