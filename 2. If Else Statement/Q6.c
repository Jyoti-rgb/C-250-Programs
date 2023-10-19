// ● The Number Is Positive or Negative
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if (a>=0)
    {
        printf("Positive Number: %d", a);
    }else
    {
        printf("Negative Number: %d", a);

    }
    
    return 0;
}
