// ● Greatest Among Three Numbers

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Number: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b && a>c)
    {
        printf("%d is Greatest Number.", a);
    }
    else if (b>a && b>c)
    {
        printf("%d is Greatest Number.", b);
    }
    else
    {
        printf("%d is Greatest Number.", c);
    }
    
    return 0;

}