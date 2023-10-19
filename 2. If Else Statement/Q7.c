// ● The Number Is Even or Odd

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("Even Number: %d", a);
    }else{
        printf("Odd Number: %d", a);
    }
    return 0;
 }