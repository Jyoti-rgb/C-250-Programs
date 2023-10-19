// ● Greatest of Two Numbers

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Number: ");
    scanf("%d%d", &a, &b);
    if (a>b)
    {
        printf("%d is a Greatest Number from %d",a,b);
    }else
    {

        printf("%d is a Greatest Number from %d",b,a);
    }
    
    return 0;
}