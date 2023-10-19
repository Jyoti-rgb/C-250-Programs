     // ● The Greatest Number Among the Given Three Numbers
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Number: ");
    scanf("%d%d%d", &a, &b, &c);
    // with ternary operation
    // G = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
  
    //    with if/else method
    if(a>=b && a >=c)
        printf("Greatest number is: %d", a);
    if(b>=a && b>=c)
        printf("Greatest number is: %d", b);
    if(c>=b && c>=a)
        printf("Greatest number is: %d", c);
    return 0;
}
