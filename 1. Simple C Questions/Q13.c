// ● GCD of Two Numbers

#include<stdio.h>

int main()
{
    int n1,n2,G;
    printf("Enter the Two Number: ");
    scanf("%d%d", &n1, &n2);
    // G = n1 < n2 ? n1 : n2;
    for (G =n1 < n2 ? n1 : n2; G>=1; G--)
    if (n1%G==0 && n2%G==0 )
     break;
    printf("GCD is: %d",G);
    return 0;
}