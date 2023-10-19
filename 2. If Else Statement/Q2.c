// ● The Number Is Positive or Negative

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    if (a>0)
    {
        printf("Positive Number");
    }else if(a<0){
        printf("Negative Number");
    }else{
        printf("the number is %d", a);
    }
    return 0;
}